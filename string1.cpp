// File: string1.cpp
// Created by Tyler Sandoval on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>       // C++ string class
using namespace std;
// Constants, Structs, Classes

// Prototypes

// Main Program Program
int main(void)
{
    string s1; // Define a string
    string s2 = "Waldo Weber"; // Define and initialize string
    string s3("Waldo Weber University"); // Define and initialize string

    s1 = s3;  // assignment
    cout << "s1: " << s1 << endl;
    s1 += s2; // concatenation
    cout << "2) s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    // Swap values
    s1.swap(s2);
    cout << "3) s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;

    return 0;
}
// Function Definitions