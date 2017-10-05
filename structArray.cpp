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
void PartInput(Part pi[SIZE]);
// Main Program Program
int main(void)
{
    Part p[SIZE];
    PartInput(p);  // Take part input

    return 0;
}
// Function Definitions
void PartInput(Part pi[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >> pi[i].modelNumber;
        cout << "Enter part number: ";
        cin >> pi[i].partNumber;
        cout << "Enter part cost: ";
        cin >> pi[i].cost;
        cout << endl;
    }
}