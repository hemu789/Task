#include<iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a generic sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow meow!" << std::endl;
    }
};

int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    animal1->makeSound();  // Calls Dog's makeSound()
    animal2->makeSound();  // Calls Cat's makeSound()
    return 0;
}
