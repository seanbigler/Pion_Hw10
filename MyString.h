//
// Created by Hugo Valle on 11/12/17.
//

#ifndef HW7_MYSTRING_H
#define HW7_MYSTRING_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <memory>
//#include <string> // THIS IS NOT ALLOWED. No C++ string class allowed
using namespace std;

class MyString
{
private:
    MyString();
    MyString(const char *cString);
public:
    char* getInternalCString() const;
    int getNlength() const;
    void reverseit();
    int compareStr(const MyString &lhs, const MyString &rhs);
};

#endif //HW7_MYSTRING_H
