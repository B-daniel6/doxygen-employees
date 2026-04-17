/*
 * @file Supervisor.cpp
 * @author Brandon Daniel 
 * @brief Implements the Supervisor class, a derived class of Employee that
 *        includes an additional attribute representing the number of employees
 *        supervised. Pay is increased based on team size.
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Supervisor.
 *
 * Initializes numSupervised to -1 to indicate an uninitialized state.
 * The Employee base class default constructor is automatically invoked.
 */
Supervisor::Supervisor() {
    numSupervised = -1;
}

/**
 * @brief Parameterized constructor for Supervisor.
 *
 * Initializes both the inherited Employee attributes and the Supervisor-
 * specific numSupervised value.
 *
 * @param ID             Unique employee identifier.
 * @param years          Number of years the supervisor has worked.
 * @param hourlyRate     Supervisor's hourly pay rate.
 * @param hoursWorked    Hours worked in the current pay period.
 * @param numSupervised  Number of employees supervised.
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised)
    : Employee(ID, years, hourlyRate, hoursWorked)
{
    this->numSupervised = numSupervised;
}

/**
 * @brief Prints all supervisor information.
 *
 * Calls Employee::print() to display base attributes, then prints the
 * supervisor-specific number of employees supervised.
 */
void Supervisor::print() {
    Employee::print();
    cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief Calculates the supervisor's pay for the current period.
 *
 * Overrides Employee::calculatePay(). Supervisors earn an additional 1%
 * of their base pay for each employee they supervise.
 *
 * Formula:
 *     basePay = Employee::calculatePay()
 *     totalPay = basePay + (basePay * 0.01 * numSupervised)
 *
 * @return The total calculated pay.
 */
double Supervisor::calculatePay() {
    double val = Employee::calculatePay();
    val = val + val * (0.01 * numSupervised);
    return val;
}
