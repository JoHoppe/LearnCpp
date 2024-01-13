#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

class Dog 
{
    public:
        string name ="pepi";
        string type = "terrier";
        int age = 10;
    
};
int learnTypes(){
    int i = 4;
    long long input;
    string placeholder ="placeholder";
    double d = 2.345345435;
    cout << "Input a number" << endl;
    cin >> input;
    cout << input<<endl;
    cout << i<<placeholder<<d<<endl;
    return i;
}
int compute(){
    double x = 36;
    double y = 10;

    x=pow(x,3);
    y=pow(y,1.5);
    double sum = y+x;
    float root = sqrt(sum);
    return 0;
}

double computeBinomial(double x, double y){
    double output = pow(x,2)+ 2*x*y+ pow(y,2);
    return output;
}

bool checkIsEven(int x){
    bool output;
    ((x%2)==0) ? output=true : output=false;
    cout << output << endl;
    return output;
}

int forLoop(){
    for(int i = 0;i<10;i++){
        cout << (i)<<endl;
    }
    return 1;
}

int main(){
    /* Dog dogobj;
    printf("hello Wordl""\n");
    cout <<"dog name: "<< dogobj.name<< endl; */
    //learnTypes();
    //compute();
    /* int x,y;
    cout <<"Input first Number"<<endl;
    cin >> x;
    cout <<"Input second Number" << endl;
    cin >> y;
    double output= computeBinomial(x,y);
    cout << output<<endl; */
    
    /* int i;
    cin >> i;
    checkIsEven(i); */
    forLoop();
}
