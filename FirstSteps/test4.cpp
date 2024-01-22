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

int main(){
    test(5,4);
    Zebra zebra(1,"Morty");
    zebra.message();
    return 0;
}


