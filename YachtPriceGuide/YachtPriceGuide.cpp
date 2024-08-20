// YachtPriceGuide.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "YachtPriceGuide.h"

using namespace std;

const int MARCH = 3;
const int APRIL = 4;
const int MAY = 5;
const int JUNE = 6;
const int JULY = 7;
const int AUGUST = 8;
const int SEPTEMBER = 9;
const int OCTOBER = 10;

const int ERROR = -1;

int main()
{
    int month, numDays;
    cout << "Enter hire month and number of days: ";
    cin >> month >> numDays;

    double rate = calculatePrice(month);

    if (rate == ERROR)
    {
        cout << "Yachts are not available for hire from Nov to Feb inclusive\n\n";
        return 0;
    }

    double discountRate = calculateDiscountRate(numDays);
    double cost = numDays * rate * (1 - discountRate / 100);
    cout << "Total cost of hire is: " << cost << endl;
}

int calculatePrice(int month)
{
    switch (month)
    {
    case MARCH:
    case APRIL:
        return 100;
    case MAY:
    case JUNE:
    case SEPTEMBER:
    case OCTOBER:
        return 250;
    case JULY:
    case AUGUST:
        return 400;
    }
    return ERROR;
}

int calculateDiscountRate(int numDays)
{
    if (numDays <= 15)
        return 0;
    if (numDays <= 30)
        return 5;
    if (numDays <= 60)
        return 10;
    return 15;
}
