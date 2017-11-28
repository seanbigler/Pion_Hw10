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
 * @param cString
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
/**
 * Get object's string data member
 * @return Object's string data member
 */
char *MyString::getInternalCString() const
{

    return internalCString.get();
}

int MyString::getNlength() const
{
    return nlength;
}

void MyString::reverseit()
{
    unique_ptr<char[]> temp(new char[nlength]);
    //temp = make_unique<char[]>(nlength);

    cout << "Hello" << endl;
    cout << internalCString.get() << endl;

    for (int i = 0; i < nlength; i++)
    {
        temp[i] = internalCString[nlength - i];
    }
    cout << temp.get() << endl;
    for (int i = 0; i < nlength; i++)
    {
        internalCString[i] = temp[i];
    }
    //internalCString = move(temp);
}
