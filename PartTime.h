#ifndef PARTTIME_H
#define PARTTIME_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class PartTime : public Employee
{
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTime(string n, int i, int h, double r) 
        : Employee(n, i, 0), hoursWorked(h), hourlyRate(r) { }
    
    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }
    
    void display() override {
        cout << "== Part Time ==\n"
             << "name : " << name << "\n"
             << "ID : " << personID << "\n"
             << "Hours : " << hoursWorked << "\n"
             << "Rate : " << hourlyRate << "\n"
             << "Salary : " << calculateSalary() << endl;
    }
};

#endif
