# Employee Management System (C++ OOP)

نظام إدارة موظفين بـ C++ يطبق مفاهيم الـ
Object-Oriented Programming.

وبطبق الاساسيات البدائية .. يعني تدريب شامل
#🎯 الميزا
- إدارة 3 أنواع من الموظفين: FullTime, PartTime, Intern
- حساب الرواتب تلقائياً حسب نوع كل موظف
- عرض البيانات باستخدام Polymorphism

## 🏛️ مفاهيم OOP المطبقة
- **Abstraction:** كلاسات `Person` و `Employee` (Abstract)
- **Inheritance:** `Person` → `Employee` → `FullTime/PartTime/Intern`
- **Polymorphism:** دوال `display()` و `calculateSalary()`
- **Encapsulation:** استخدام `protected`, `private`, Getters/Setters

## 📁 هيكل المشروع
- `Person.h` — الكلاس الأساسي (Abstract)
- `Employee.h` — الكلاس الابن (Abstract)
- `FullTime.h`, `PartTime.h`, `Intern.h` — الكلاسات Concrete
- `main.cpp` — البرنامج الرئيسي

## ⚙️ كيفية التشغيل
```bash
g++ main.cpp -o app
./app
