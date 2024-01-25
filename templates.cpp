#include <iostream>
#include <vector>
using namespace std;

template<class Type>
Type multiply(Type a,Type b){
    return(a*b);
}
template<class Type,size_t Size>
Type array_max(Type (&input)[Size]){
    Type max = input[0];
    if(Size==0){
        return Type();
    }
    for(int i =0;i< static_cast<int>(Size);i++){
        if(input[i]>max){
            max= input[i];
        }
    }
    return max;
}
template<class Type>
bool swap_value(Type* a, Type* b){
    cout<<"initial: a="<<*a<<" and b="<<*b<<endl;
    Type temp = *a;
    *a=*b;
    *b=temp;
    cout<<"now: a="<<*a<<" and b="<<*b<<endl;
    return true;
}
int main() {
  int result = multiply<int> ( 2, 5 );
  float result2=multiply<float>(5.53453f,6.322432f);
  int arr[] = {2,8,20,3,2};
  cout<<array_max(arr)<<endl;
  int a=4,b=5;
  swap_value(&a,&b);
}

