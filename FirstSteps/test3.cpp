#include <iostream>
#include <cstdio>

using namespace std;

/*Write a C++ function called sortAsc to sort an array of ten integer values in ascending order.
The function sortAsc will accept two arguments
    First, a pointer that points to the array.
    Second, the array size.
*/
int* sortAsc(int* ptr,int size){
    bool flag = true;
    for(int counter=0;counter-1<size;counter++){
        if( ptr[counter]<ptr[counter+1]){
            int temp = ptr[counter];
            ptr[counter]= ptr[counter+1];
            ptr[counter+1]=temp;
            counter=0;
        }
    }
    return ptr;
}
int arr[] = {23,34,2,3,5,12,42,56,89,8};
int main(){
    cout<<*sortAsc(arr,10)<<endl;
}
