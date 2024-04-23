#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    int marks;
    int year;
public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() override {
        cout << "Student Details:" << endl;
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    double salary;
public:
    Employee(string n, string d, double s) : Person(n), department(d), salary(s) {}

    void display() override {
        cout << "Employee Details:" << endl;
        Person::display(); 
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Person* person1 = new Student("Abhay", "B.Sc(P)", 84, 2023);
    Person* person2 = new Employee("Shivam", "Human Resource", 200000);

    person1->display();
    cout << endl;
    person2->display();

    delete person1;
    delete person2;

    return 0;
}
