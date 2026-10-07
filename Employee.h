#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "Person.h"

class Employee : public Person
{
protected:
    double baseSalary;

public:
    Employee(const std::string& n, int i, double s)
        : Person(n, i), baseSalary(s) {}
    
    virtual double calculateSalary() const = 0;
};

#endif
