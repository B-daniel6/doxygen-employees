/*
 * @file Employee.cpp
 * @author Brandon Daniel
 * @brief Implements the Employee class methods, including constructors,
 *        printing, anniversary updates, and pay calculation.
 */

#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Employee.
 *
 * Initializes all numeric fields to -1 to indicate an uninitialized or
 * placeholder state. This can be useful for debugging or detecting
 * incomplete employee records.
 */
Employee::Employee() {
    ID = years = hoursWorked = hourlyRate = -1;
}

/**
 * @brief Parameterized constructor for Employee.
 *
 * @param ID           Unique employee identifier.
 * @param years        Number of years the employee has worked.
 * @param hourlyRate   Employee's hourly pay rate.
 * @param hoursWorked  Number of hours worked in the current pay period.
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
    this->ID = ID;
    this->years = years;
    this->hourlyRate = hourlyRate;
    this->hoursWorked = hoursWorked;
}

/**
 * @brief Prints all stored information about the employee.
 *
 * Outputs ID, years employed, hourly rate, and hours worked to the console.
 */
void Employee::print() {
    cout << "Printing information for employee " << ID << ":\n"
         << " Years Employed: " << years << "\n"
         << " Hourly Rate: " << hourlyRate << "\n"
         << " Hours Worked: " << hoursWorked << endl;
}

/**
 * @brief Updates the employee's years of service and applies a small raise.
 *
 * Increments the employee's years by 1 and increases the hourly rate by 0.2%.
 * Also prints a congratulatory message.
 */
void Employee::anniversary() {
    years++;
    hourlyRate = hourlyRate + hourlyRate * 0.002;  // 0.2% raise

    cout << "Congratulations to employee " << ID
         << " on " << years << " year(s) at the company!" << endl;
}

/**
 * @brief Calculates the employee's pay for the current period.
 *
 * @return The total pay, computed as hourlyRate × hoursWorked.
 */
double Employee::calculatePay() {
    return hourlyRate * hoursWorked;
}
