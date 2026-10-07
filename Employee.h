#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee : public Person
{
protected:
    double baseSalary;

public:
    Employee(string n, int i, double s) 
        : Person(n, i), baseSalary(s) {}
    virtual double calculateSalary() = 0;
};

#endif
