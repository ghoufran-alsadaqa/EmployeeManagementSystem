#ifndef FULLTIME_H
#define FULLTIME_H

#include <string>
#include <iostream>
#include "Employee.h"

class FullTime : public Employee
{
private:
    double bonus;

public:
    FullTime(const std::string& n, int i, double s, double b)
        : Employee(n, i, s), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void display() const override {
        std::cout << "== Full Time ==\n"
                  << "Name   : " << name << "\n"
                  << "ID     : " << personID << "\n"
                  << "Salary : " << calculateSalary() << "\n";
    }
};

#endif
