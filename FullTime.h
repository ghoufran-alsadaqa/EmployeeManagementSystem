#ifndef FULLTIME_H
#define FULLTIME_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class FullTime : public Employee
{
private:
    double bonus;

public:
    FullTime(string n, int i, double s, double b)
        : Employee(n, i, s), bonus(b) { }
    
    double calculateSalary() override {
        return baseSalary + bonus;
    }
    
    void display() override {
        cout << "== Full Time ==\n"
             << "name : " << name << "\n"
             << "ID : " << personID << "\n"
             << "Salary : " << calculateSalary() << endl;
    }
};

#endif
