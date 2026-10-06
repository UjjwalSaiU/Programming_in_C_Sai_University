#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Virtual inheritance
class Student :  public Person {
public:
    Student(string n) : Person(n) {}
};

class Employee : public Person {
public:
    Employee(string n) : Person(n) {}
};

// Diamond
class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n)
        : Person(n), Student(n), Employee(n) {}
};

int main() {
    TeachingAssistant ta("Ujjwal");

    ta.display();

    return 0;
}