// File: Arrays
// Created by Tyler Sandoval on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int SIZE = 3;
// Prototypes

// Main Program Program
int main(void)
{
    // Define an array of 3 integers:
    int age[SIZE];
    // Declare and initialize an array of 3 members:
    int age2[SIZE] = {99, 21, 33};
    // Take input
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age: ";
        cin >> age[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << "age " << i << " is " << age[i] << endl;
        cout << "age2 " << i << " is " << age2[i] << endl;
    }
    cout << "Done!" << endl;
    return 0;
}
// Function Definitions