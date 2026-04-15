/*
 * @file Employee.h
 * @author Brandon Daniel
 * @brief Class file for employee
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/*
 * @class Employee
 * @brief Represents a basic employee
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  /*
   * @brief Prints information about employee
   * @return void
   */
  virtual void print();

  
  /*
   * @brief Calculates the employees pay
   * @return double
   */
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
