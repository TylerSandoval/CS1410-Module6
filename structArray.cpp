// File: structArray
// Created by Tyler Sandoval on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
struct Part
{
    int modelNumber;
    int partNumber;
    float cost;
};
const int SIZE = 4;
// Prototypes

// Main Program Program
int main(void)
{
    Part p[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >> p[i].modelNumber;
        cout << "Enter part number: ";
        cin >> p[i].partNumber;
        cout << "Enter part cost: ";
        cin >> p[i].cost;
        cout << endl;
    }
    return 0;
}
// Function Definitions