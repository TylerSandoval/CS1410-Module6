// File: inputOutputString
// Created by Tyler Sandoval on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>

using namespace std;
// Constants, Structs, Classes

// Prototypes

// Main Program Program
int main(void)
{
    string full_name, nickname, address;

    cout << "Enter your full name: ";
    getline(cin, full_name);    // take embedded spaces/blanks

    cout << "Enter your nickname: ";
    cin >> nickname; // Will take one string object (word)

    cout << "Enter your address on separate lines\n";
    cout << "Terminate input with '$'\n";
    getline(cin, address, '$');  // cin, string variable destination, termination condition

    cout << full_name << endl;
    cout << nickname << endl;
    cout << address << endl;
    
    return 0;
}
// Function Definitions