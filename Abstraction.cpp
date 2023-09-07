#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    float GradePoints;

public:
    // Constructor
    Student(string n, int a, float gpa)
    {
        name = n;
        age = a;
        GradePoints = gpa;
    }

    void displayInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << GradePoints << endl;
    }
};

int main()
{
    // Create an instance of the Student class
    Student student1("Hemant", 20, 9.2f);

    student1.displayInfo();

    return 0;
}
