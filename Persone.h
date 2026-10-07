#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int personID;

public:
    Person(string n, int i) : name(n), personID(i) {}
    virtual ~Person() {}
    virtual void display() = 0;
    string getName() const { return name; }
    int getID() const { return personID; }
    void setName(string n) { name = n; }
};

#endif
