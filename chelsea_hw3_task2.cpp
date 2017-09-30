// File: chelsea_hw3_task2.cpp
// Created by Garrett Van Dyke on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
class Serial
{
private:
    int number;             // Serial Number
    static int count;       // Count of current object
public:
    Serial(): number(0)     // Constructor
    {
        count++;            // Each time an object is created the count increments
        number = count;     // The number of the object is the current count
    }

    int getNumber()         // Function allows object to report its number
    {
        return number;
    }
};

int Serial::count = 0;      // Initializes count to 0

// Prototypes
void ShowSerial(Serial srl);

// Main Program Program
int main()
{
    Serial alpha, beta, gamma;

    ShowSerial(alpha);
    ShowSerial(beta);
    ShowSerial(gamma);

    return 0;
}

// Function Definitions
void ShowSerial(Serial srl) // Takes class "Serial" and displays the objects number
{
    cout << "I am object number " << srl.getNumber() << endl;
}