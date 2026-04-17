/*
 * @file Supervisor.h
 * @author Brandon Daniel 
 * @brief Declares the Supervisor class, a derived class of Employee that
 *        includes an additional attribute representing the number of
 *        employees supervised. Supervisors earn bonus pay based on team size.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * @brief A specialized Employee who supervises other employees.
 *
 * The Supervisor class extends the Employee class by adding a new attribute,
 * numSupervised, which represents how many employees report to the supervisor.
 * This value is used to calculate bonus pay, demonstrating inheritance and
 * method overriding.
 */
class Supervisor : public Employee {
private:
    /**
     * @brief Number of employees supervised by this supervisor.
     *
     * This value is used to increase the supervisor's pay by 1% per supervised
     * employee.
     */
    int numSupervised;

public:
    /**
     * @brief Prints all supervisor information, including inherited attributes
     *        and the number of employees supervised.
     */
    void print();

    /**
     * @brief Calculates the supervisor's pay for the current period.
     *
     * Overrides Employee::calculatePay(). Supervisors earn an additional 1%
     * of their base pay for each employee they supervise.
     *
     * @return The total calculated pay.
     */
    double calculatePay();

    /**
     * @brief Default constructor.
     *
     * Initializes numSupervised to -1. The Employee base class default
     * constructor is automatically invoked.
     */
    Supervisor();

    /**
     * @brief Parameterized constructor.
     *
     * Initializes both Employee attributes and the supervisor-specific
     * numSupervised value.
     *
     * @param ID             Unique employee identifier.
     * @param years          Number of years employed.
     * @param hourlyRate     Supervisor's hourly pay rate.
     * @param hoursWorked    Hours worked in the current pay period.
     * @param numSupervised  Number of employees supervised.
     */
    Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif // SUPERVISOR_H
