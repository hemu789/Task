/* Encapsulation is a fundamental concept in object-oriented programming (OOP) that refers to the bundling of 
 data and methods 

that operate on that data within a single unit, which is called a class. */

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
public:
    
    Student(string n, int a) {
        name =n;
        age = a;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

   
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a >= 0)
        {
            age = a;
        }
    }
};

int main()
{
    // Create an instance of the Student class
    Student s1("Hemant", 20);

    cout << "Student's name: " << s1.getName() << endl;
    cout << "Student's age: " << s1.getAge() << endl;

    

    return 0;
}
