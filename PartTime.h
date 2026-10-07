#ifndef PARTTIME_H
#define PARTTIME_H

#include <string>
#include <iostream>
#include "Employee.h"

class PartTime : public Employee
{
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTime(const std::string& n, int i, int h, double r)
        : Employee(n, i, 0), hoursWorked(h), hourlyRate(r) {}

    double calculateSalary() const override {
        return hoursWorked * hourlyRate;
    }

    void display() const override {
        std::cout << "== Part Time ==\n"
                  << "Name   : " << name << "\n"
                  << "ID     : " << personID << "\n"
                  << "Hours  : " << hoursWorked << "\n"
                  << "Rate   : " << hourlyRate << "\n"
                  << "Salary : " << calculateSalary() << "\n";
    }
};

#endif
