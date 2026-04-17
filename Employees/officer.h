/*
 * @file Officer.h
 * @author Brandon Daniel 
 * @brief Defines the Officer class, a derived class of Employee that
 *        introduces an additional evilness attribute affecting pay.
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief A specialized type of Employee with an additional "evilness" attribute.
 *
 * The Officer class extends the Employee class by introducing an extra
 * characteristic—evilness—which influences the officer's pay calculation.
 * Officers earn more based on how "evil" they are, demonstrating an example
 * of inheritance and method overriding.
 */
class Officer : public Employee {
private:
    /**
     * @brief Represents the officer's level of "evilness."
     *
     * This value is added to the officer's hourly rate when calculating pay.
     * Higher evilness results in higher total pay.
     */
    double evilness;

public:
    /**
     * @brief Prints all officer information, including inherited attributes
     *        and the officer-specific evilness value.
     */
    void print();

    /**
     * @brief Calculates the officer's pay for the current period.
     *
     * Overrides Employee::calculatePay(). The formula used is:
     * (hourlyRate + evilness) × hoursWorked.
     *
     * @return The total calculated pay.
     */
    double calculatePay();

    /**
     * @brief Default constructor.
     *
     * Initializes evilness to a default value of 500. The Employee base class
     * default constructor is automatically invoked.
     */
    Officer();

    /**
     * @brief Parameterized constructor.
     *
     * Initializes both Employee attributes and the officer-specific evilness.
     *
     * @param ID           Unique employee identifier.
     * @param years        Number of years employed.
     * @param hourlyRate   Officer's hourly pay rate.
     * @param hoursWorked  Hours worked in the current pay period.
     * @param evilness     Officer's evilness level.
     */
    Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif // OFFICER_H
