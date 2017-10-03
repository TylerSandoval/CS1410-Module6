// File: multiDarray
// Created by Tyler Sandoval on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int ROWS = 3;
const int COL = 3;

// Prototypes

// Main Program Program
int main(void)
{
    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2, 3},
                           {21, 22, 23},
                           {31, 32, 33}};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Enter your age: ";
            cin >> age[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Age (" << i << "," << j << ") is " << age[i][j] << endl;
            cout << "Age2 (" << i << "," << j << ") is " << age2[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}
// Function Definitions