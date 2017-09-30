// File: chelsea_hw3_task2.cpp
// Created by Garrett Van Dyke on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
class Serial
{
private:
    int number;
    static int count;
public:
    Serial(): number(0)
    {
        count++;
        number = count;
    }

    int getNumber()
    {
        return number;
    }
};

int Serial::count = 0;

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
void ShowSerial(Serial srl)
{
    cout << "I am object number " << srl.getNumber() << endl;
}