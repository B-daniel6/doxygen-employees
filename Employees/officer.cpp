/*
 * @file Officer.cpp
 * @author Brandon Daniel 
 * @brief Implements the Officer class, a specialized type of Employee
 *        with an additional "evilness" attribute that affects pay.
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Officer.
 *
 * Initializes the Officer's evilness level to a default value of 500.
 * The Employee base class default constructor is automatically invoked.
 */
Officer::Officer() {
    evilness = 500;
}

/**
 * @brief Parameterized constructor for Officer.
 *
 * Initializes both the inherited Employee attributes and the Officer-
 * specific evilness value.
 *
 * @param ID           Unique employee identifier.
 * @param years        Number of years the officer has worked.
 * @param hourlyRate   Officer's hourly pay rate.
 * @param hoursWorked  Number of hours worked in the current pay period.
 * @param evilness     Additional attribute representing the officer's
 *                     "evilness" level, which influences pay.
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness)
    : Employee(ID, years, hourlyRate, hoursWorked) 
{
    this->evilness = evilness;
}

/**
 * @brief Prints all stored information about the officer.
 *
 * Calls the Employee::print() method to display base attributes, then
 * prints the officer-specific evilness value.
 */
void Officer::print() {
    Employee::print();
    cout << " Evilness: " << evilness << endl;
}

/**
 * @brief Calculates the officer's pay for the current period.
 *
 * Overrides Employee::calculatePay(). The officer's pay is increased
 * by adding their evilness value to their hourly rate.
 *
 * @return The total pay, computed as (hourlyRate + evilness) × hoursWorked.
 */
double Officer::calculatePay() {
    return (hourlyRate + evilness) * hoursWorked;
}
