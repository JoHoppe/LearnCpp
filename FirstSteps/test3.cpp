#include <iostream>
#include <cstdio>

using namespace std;

/*Write a C++ function called sortAsc to sort an array of ten integer values in ascending order.
The function sortAsc will accept two arguments
    First, a pointer that points to the array.
    Second, the array size.
*/
void sortAsc(int* ptr,int size){
    int counter1, counter2;
    for(counter1=0;counter1<size;counter1++){
        for(counter2=counter1+1;counter2<size;counter2++){
        if( ptr[counter1]>ptr[counter2]){
            int temp = ptr[counter1];
            ptr[counter1]= ptr[counter2];
            ptr[counter2]=temp;  
        }
        }
    }
}
void createMatrix(int n){
    int row =5;
    int collumn=5;
    int** array2D = new int* [collumn];
    int numberCounter = 1;
    for(int counter1 = 0; counter1<row;counter1++){
        array2D[counter1] = new int[row];
        for(int counter2 =0; counter2<collumn;counter2++){
            array2D[counter1][counter2]=numberCounter;
            cout << "numberCounter = " << numberCounter << endl;
            numberCounter++;
        }
    }
    //print the array
    for(int pcounter1=0;pcounter1<row;pcounter1++){
        for(int pcounter2=0;pcounter2<collumn;pcounter2++){
            cout<<array2D[pcounter1][pcounter2]<<"\t";
        }
        cout<<"\n";
    }
    //delete for free up memory
    for(int dcounter1=0; dcounter1<collumn; dcounter1++){
        delete[] array2D[dcounter1];
    }
    delete [] array2D;

}

int arr[] = {23,34,2,3,5,12,42,56,89,8};
int main(){
    sortAsc(arr,10);
    for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";}
    cout << endl;
    createMatrix(0);
}
