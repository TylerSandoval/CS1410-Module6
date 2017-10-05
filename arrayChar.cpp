// File: arrayChar.cpp
// Created by Tyler Sandoval on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int MAX = 80;
// Always a null character at the end of a string,
// MAX would support a 79 character string and null

// Prototypes

// Main Program Program
int main(void)
 {
     char st[MAX];
     //cout << "Enter your first name: ";
     //cin >> st;
     //cout << "Hello " << st << endl;
     // let the compiler calculate the space:
     // String constants
     char hi[] = "Hello Weber State University Students!";
     cout << hi << endl;
     // To support embedded blanks/spaces, use cin.get() function
     // Parameters are storage destination and accepted size
     cout << "Enter your full name: ";
     cin.get(st,MAX);
     cout << "Hello, " << st << endl;

     return 0;
}
// Function Definitions