#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
protected:
    std::string name;
    int personID;

public:
    Person(const std::string& n, int i) : name(n), personID(i) {}
    virtual ~Person() {}
    virtual void display() const = 0;
    
    std::string getName() const { return name; }
    int getID() const { return personID; }
    void setName(const std::string& n) { name = n; }
};

#endif
