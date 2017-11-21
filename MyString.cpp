//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"
/*!
 * Default constructor for MyString Class
 */
MyString::MyString()
{
    internalCString = make_unique<char[1]>('\0');

}
/*!
 * Constructor with a parameter of a string
 * @param cString
 */
MyString::MyString(const char *cString)
{
    // Find length of input array of chars

    internalCString = make_unique<char[]>(nlength+1);
}

char *MyString::getInternalCString() const
{

    return nullptr;
}
