// File: testMyString.cpp
// Created by Hugo Valle on 11/12/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
#include "MyString.h"
// Main Program Program
int main(void)
{
    MyString big("big");

    string s1 = big.getInternalCString();
    cout<<s1<<endl;
/*
    MyString saw("saw");
    MyString bigger("bigger");
    MyString little("little");
    MyString littler("littler");
    //Note, make sure you are calling your own comparestr() function,
    // and not the one included in the C libraries!
    cout << "comparestr(big, bigger) = "
         << comparestr(big, bigger) << endl; //display a -1
    cout << "comparestr(bigger, big) = "
         << comparestr(bigger, big) << endl; //display a 1
    cout << "comparestr(big, big) = "
         << comparestr(big, big) << endl; //display a 0
    cout << "comparestr(big, little) = "
         << comparestr(big, little) << endl; //display a -1
    cout << "comparestr(little, little) = "
         << comparestr(little, little) << endl;  //display 0
    cout << "comparestr(littler, little) = "
         << comparestr(littler, little) << endl; //display 1
    cout << "comparestr(big, saw) = "
         << comparestr(saw, big) << endl; //display -2

    // This section will be used to test your
    // output operator "<<"
    //
    cout <<"Original: "<< bigger << endl; //reggib
    bigger.reverseit();
    cout <<"New: "<< bigger << endl; //reggib

    cout <<"Original: "<< littler << endl; //reggib
    littler.reverseit();
    cout <<"New: "<< littler << endl; //reggib
    */
    return 0;
}
