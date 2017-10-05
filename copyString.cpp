// File: copyString.cpp
// Created by Tyler Sandoval on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <cstring> // support for array of chars or C "strings"
using namespace std;
// Constants, Structs, Classes
const int MAX = 80;
const int DAYS = 7;
// Prototypes

// Main Program Program
int main(void)
{
    char str1[] = "You already know who it is\n"
                  " in the forest of the night.";
    char str2[MAX];
    // Copy two strings strcopy(destination, source), cstring library
    strcpy(str2, str1);
    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;

    // An array of strings
    char days[DAYS][MAX] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 0; i < DAYS; i++)
    {
        cout << i << " Day is " << days[i] << endl;
    }
    return 0;
}
// Function Definitions