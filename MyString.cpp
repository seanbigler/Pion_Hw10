//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"
using namespace std;
/*!
 * Default constructor for MyString Class
 */
MyString::MyString()
{
    internalCString = make_unique<char[]>(1);
    internalCString[0] = '\0';
    nlength = 1;
}
/*!
 * Constructor with a parameter of a string
 * @param cString: The string that the user enters.
 */
MyString::MyString(const char *cString)
{
    // Find length of input array of chars
    int i = 0;
    while(*(cString + i) != '\0')
    {
        i++;
    }
    nlength = i+1;
    internalCString = make_unique<char[]>(nlength);
    for (i = 0; i < nlength; i++)
    {
        internalCString[i] = *(cString + i);
    }
}
/*!
 * Get object's string data member
* @return Object's string data member
*/
char *MyString::getInternalCString() const
{

    return internalCString.get();
}
/*!
 * Gets the length of the string (number of characters)
 * @return Resturns the length of the string(type int)
 */
int MyString::getNlength() const
{
    return nlength;
}
/*!
 * Reverses the string of chars
 */
void MyString::reverseit()
{
    unique_ptr<char[]> temp(new char[nlength]);
    //temp = make_unique<char[]>(nlength);


    for (int i = 0; i < nlength; i++)
    {
        temp[i] = internalCString[nlength - (i + 2)];
        //cout << i << ": " << temp[i] << endl;
    }
    temp[nlength - 1] = '\0';
    //cout << temp.get() << endl;
//    for (int i = 0; i < nlength; i++)
//    {
//        internalCString[i] = temp[i];
//        //cout << internalCString[i] << endl;
//    }
    internalCString = move(temp);
}
/*!
 * This compares 2 different strings to see if they are the same
 * @param lhs : This is the left hand side string that is being compared
 * @param rhs : THis is what the left hand string is being compared to (right hand string)
 * @return: This returns -1, 0, 1, or -2 in order to compare which string is bigger, or if they are the same.
 */
int MyString::compareStr(const MyString &lhs, const MyString &rhs) {
    int lhLength = lhs.getNlength();
    int rhLength = rhs.getNlength();
    int difference = lhLength-rhLength;
    int result = 0;
    if(difference==0)
    {
        //if the 2 strings are the same in length, then see if they are different strings
        for(int i = 0; i < rhLength; i++)
        {
            if(lhs.internalCString[i] == rhs.internalCString[i])
            {
                result = 0;
            } else
            {
                result = -2;
                break;
            }

        }
    }
    else if (difference > 0)
    {
       result = 1;
    }
    else if (difference < 0)
    {
        result = -1;
    }
    return result;
}
/*!
 * Operator overload << for class MyString
 * @param os system os
 * @param myString reference to object
 * @return os output of object
 */
ostream &operator<<(ostream &os, const MyString &myString)
{
    os << myString.getInternalCString();

    return os;
}
