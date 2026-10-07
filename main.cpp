#include <iostream>
#include <vector>
#include "FullTime.h"
#include "PartTime.h"
#include "Intern.h"
using namespace std;
int main()
{
   vector<Employee*> employees;
   employees.push_back(new FullTime("Ahmed", 1, 5000, 1000));
   employees.push_back(new PartTime("Sara", 2, 40, 25));
   employees.push_back(new Intern("Ghoufran", 3, 500));
   for(Employee* e :employees){
       e->display();
       cout <<endl;
   }
   double total = 0;
   for(Employee* e :employees){
       total += e->calculateSalary();
   }
   cout << "Total Salaries: " << total <<endl;

   for (Employee* e : employees) {
    delete e;
}
    return 0;
}
