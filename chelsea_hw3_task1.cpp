// File: chelsea_hw3_task1.cpp
// Created by Garrett Van Dyke on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Classes, Structures
class Date
{
private:
    int month;
    int day;
    int year;
public:
    void get_date()
    {
        cin >> month >> day >> year;
    }

    void show_date(int num)
    {
        cout << "date" << num << " = " << month << "/"
             << day << "/" << year << endl;
    }
};

// Prototypes


// Main Program Program
int main()
{
    Date d1, d2;

    cout << "Enter a date (format 12/31/99): ";
    d1.get_date();

    cout << "Enter another date: ";
    d2.get_date();

    d1.show_date(1);
    d2.show_date(2);

    return 0;
}

// Function Definitions