// File: funcArray
// Created by Tyler Sandoval on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int SIZE = 3;
// Prototypes

// Arrays are passed by reference
void AgeInput(int iage[SIZE][COL]);
void ShowAge(int iage[SIZE][COL]);
//void AgeInput(int age[]); // another notation, size not required

// Main Program Program
int main(void)
{
    // Define an array of 3 integers:
    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2, 3},
                           {21, 22, 23},
                           {31, 32, 33}};
    // Take input
    AgeInput(age);
    // Show output
    ShowAge(age);
    ShowAge(age2);

    cout << "Done!" << endl;
    return 0;
}
// Function Definitions
void AgeInput(int iage[SIZE][COL])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Enter your age: ";
            cin >> iage[i][j];
        }
        cout << endl;
    }
}

void ShowAge(int iage[SIZE][COL])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "age (" << i << "," << j << ") is " << iage[i][j] << endl;
        }
        cout << endl;
    }
}