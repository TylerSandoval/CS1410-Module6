// File: arrayAsClassMember
// Created by Tyler Sandoval on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int MAX = 10;
class Stack
{
private:
    int st[MAX];    // stack: Array of integers
    int top;        // number of top of stack
public:
    Stack()
    {
        top = -1;      // Start the stack at -1, could start at 0 to have push be st[top++] = var;
    }
    void push(int var)  // Put member on the stack
    {
        st[++top] = var;  // Increment the variable before you use it since we start at -1
    }
    int pop()           // Take number off the stack
    {
        return st[top--];
    }
};
// Prototypes

// Main Program Program
int main(void)
{
    Stack s1;
    s1.push(11);
    s1.push(44);
    cout << "1: " << s1.pop() << endl; // 44
    cout << "2: " << s1.pop() << endl; // 11
    s1.push(12);
    s1.push(31);
    s1.push(94);
    s1.push(144);
    cout << "3: " << s1.pop() << endl; // 144
    cout << "4: " << s1.pop() << endl; // 94
    return 0;
}
// Function Definitions