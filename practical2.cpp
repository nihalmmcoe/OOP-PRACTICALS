#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string empname;
    int emp_id;
    string department;
    float salary;
    static int count;

public:
    // Default constructor
    Employee() {
        empname = "none";
        emp_id = 0;
        department = "none";
        salary = 0.0f;
        count++;
        cout << "Default constructor \n";
    }

    // Parameterized constructor
    Employee(string n, int id, string dept, float sal) {
        empname = n;
        emp_id = id;
        department = dept;
        salary = sal;
        count++;
        cout << "Parameterized constructor \n";
    }

    // Copy constructor
    Employee(Employee &emp) {
        empname = emp.empname;
        emp_id = emp.emp_id;
        department = emp.department;
        salary = emp.salary;
        count++;
        cout << "Copy constructor \n";
    }

    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << empname << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }

    static void displayCount() {
        cout << "\nTotal number of employees: " << count << endl;
    }

    ~Employee() {
        cout << "The object is deleted" << endl;
        count--;
    }

    inline void showcount() {
        cout << "Have a nice day" << endl;
        cout << "Welcome to employ management system" << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee emp1;
    emp1.showcount();
    emp1.display();

    Employee emp2("nihal", 1000, "HR", 50000.0);
    emp2.display();

    Employee emp3 = emp2;
    emp3.display();

    Employee::displayCount();

    // Corrected new Employee creation
    Employee *ptr = new Employee("jhon", 1103, "Comp", 60000.0f);
    ptr->display();
    delete ptr;

    return 0;
}
