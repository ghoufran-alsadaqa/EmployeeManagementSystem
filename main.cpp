#include <iostream>
#include <vector>
#include <memory>
#include "FullTime.h"
#include "PartTime.h"
#include "Intern.h"

int main()
{
    std::vector<std::unique_ptr<Employee>> employees;

    employees.push_back(std::make_unique<FullTime>("Ahmed", 1, 5000, 1000));
    employees.push_back(std::make_unique<PartTime>("Sara", 2, 40, 25));
    employees.push_back(std::make_unique<Intern>("Ghoufran", 3, 500));

    std::cout << "===== Employee Details =====\n\n";
    for (const auto& e : employees) {
        e->display();
        std::cout << "-------------------\n";
    }

    double total = 0;
    for (const auto& e : employees) {
        total += e->calculateSalary();
    }
    std::cout << "\nTotal Salaries: " << total << std::endl;

    return 0;
}
