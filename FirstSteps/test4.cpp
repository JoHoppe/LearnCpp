// this file is for practicing inheritance and classes
#include <iostream>
#include <string>
using namespace std;

class Triangle {
    public:
        Triangle(float new_a, float new_h){
            a= new_a;
            h= new_h;
        }
        float calc_area();
    
    private:
        float a;
        float h;
};


float Triangle:: calc_area(){
    return (0.5f*h*a);
}


float test(float length, float height) {
  
  // make the class object here 
  //set the length and height of the object here 

  Triangle tri(length,height);
  
  
  float answer; //stores value of the object area
  answer=tri.calc_area();
  
  cout <<"Area: "<<answer<<endl; //call area function for the object here

  return answer;
}

class Animal {
    protected:
        int age;
        string name;
    public:
        Animal(int new_age, string new_name) : age(new_age), name(new_name){
        }

};
class Zebra:public Animal{
    public:
        Zebra(int new_age, const char* new_name) : Animal(new_age, new_name) {
            // Constructor implementation for Zebra class
        }
        void message(){
            cout<<"Age: "<<age<<"; Name: "<<name<<endl;
        };
};

/*
Problem Statement

You will first build three classes:

    Mammal (parent class)
    Dog (derived class)
    Cat (derived class)

Dog and Cat class will inherit from Mammal.

In the exercise you have to implement the following:

    Mammal class:
        Has one protected variable for age of the mammal.
        A constructor that takes the age of mammal as input and sets it.
        The function Eat() that displays “Mammal eats food”.
        Function Speak() that displays “Mammal speaks mammalian!!”.
        Function get_Age() which returns the age of the mammal.

    Dog class:
        Inherits all the members from Mammal class.
        Implement all member functions of Mammal class for Dog class.
        Eat() should display “Dog eats meat”.
        Speak() should display “Dog barks: ruff! ruff!”.
        get_Age() should return Dog’s age.

    Cat class:
        Inherits all the members from Mammal class.
        Implement all member functions of Mammal class for Cat class.
        Eat() should display “Cat eats meat”.
        Speak() should display “Cat meows: Meow! Meow!”.
        get_Age() should return Cat’s age.
*/
class Mammal{
    protected:
    int age;
    public:
        Mammal(int new_age){
        age=new_age;
        };
    virtual void eat()const{
        cout<<"Mammal eats"<<endl;
    }
    virtual void speak()const{
        cout <<"Mammal speaks"<<endl;
    }
    int get_Age()const{
        return age;
    }
};

class Dog:public Mammal{
    public:
        Dog(int new_age):Mammal(new_age){}
       void eat()const override{
            cout<<"Dog eats"<<endl;
        }
        void speak()const override{
            cout<<"Dog speaks"<<endl;
        }
    };


int main(){
    test(5,4);
    Zebra zebra(1,"Morty");
    zebra.message();
    Mammal mammal = Mammal(5);
    Dog dog = Dog(4);
    mammal.speak();
    dog.speak();
    dog.eat();
    cout<< dog.get_Age()<<endl;
    cout<< mammal.get_Age()<<endl;
    mammal.eat();

}


