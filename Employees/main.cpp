/*
 * @file main.cpp
 * @author Brandon Daniel 
 * @brief Test driver for the Employee class hierarchy, including Employee,
 *        Supervisor, and Officer. Demonstrates constructor behavior, method
 *        overriding, and polymorphism through a unified test function.
 */

#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

using namespace std;

/**
 * @brief Runs a standardized set of tests on any Employee-derived object.
 *
 * This function demonstrates polymorphism by accepting an Employee reference
 * and calling virtual methods such as print(), calculatePay(), and anniversary().
 *
 * @param e Reference to an Employee or derived class instance.
 */
void runEmployeeTests(Employee & e);

int main() {
    // Test default Employee constructor
    Employee defaultE;
    cout << "Testing Employee default constructor:" << endl;
    runEmployeeTests(defaultE);

    cout << endl << endl;

    // Test parameterized Employee constructor
    // ID: 1248, years: 2, hourlyRate: 15.23, hoursWorked: 3
    Employee parameterizedE(1248, 2, 15.23, 3);
    cout << "Testing Employee parameterized constructor:" << endl;
    runEmployeeTests(parameterizedE);

    cout << endl << endl;
  
    // Test default Supervisor constructor
    Supervisor defaultS;
    cout << "Testing Supervisor default constructor:" << endl;
    runEmployeeTests(defaultS);

    cout << endl << endl;

    // Test parameterized Supervisor constructor
    // ID: 422, years: 9, hourlyRate: 55.44, hoursWorked: 20, numSupervised: 52
    cout << "Testing Supervisor parameterized constructor:" << endl;
    Supervisor parameterizedS(422, 9, 55.44, 20, 52);
    runEmployeeTests(parameterizedS);

    cout << endl << endl;

    // Test default Officer constructor
    Officer defaultO;
    cout << "Testing Officer default constructor:" << endl;
    runEmployeeTests(defaultO);

    cout << endl << endl;

    // Test parameterized Officer constructor
    // ID: 2, years: 94, hourlyRate: 10.859, hoursWorked: 2, evilness: 9000.1
    Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
