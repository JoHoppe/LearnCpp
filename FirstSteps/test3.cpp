#include <iostream>
#include <cstdio>
#include <vector>
#include <iomanip>

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
void createMatrix(){
    int row =5;
    int collumn=5;
    int** array2D = new int* [collumn];
    int numberCounter = 1;
    for(int counter1 = 0; counter1<row;counter1++){
        array2D[counter1] = new int[row];
        for(int counter2 =0; counter2<collumn;counter2++){
            array2D[counter1][counter2]=numberCounter;
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

void matrix2(int size){
    int** matrix = new int*[size];

    for (int counter1=0;counter1<size;counter1++){

        matrix[counter1] = new int[size];
        for(int counter2=0; counter2<size;counter2++){
            if(counter2==counter1){
                matrix[counter1][counter2]=0;
            }
            else if(counter1>counter2){
                matrix[counter1][counter2]=1;
            }
            else if (counter1<counter2){
                matrix[counter1][counter2]=-1;
            }
        }
    }
    //print the matrix
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void pascalTriangle(int size) {
    // Allocate memory for Pascal's Triangle
    int** triangle = new int*[size];
    for (int counter1 = 0; counter1 < size; counter1++) {
        triangle[counter1] = new int[counter1 + 1];
        for (int counter2 = 0; counter2 <= counter1; counter2++) {
            if (counter2 == 0 || counter2 - counter1 == 0) {
                triangle[counter1][counter2] = 1;
            } else {
                triangle[counter1][counter2] = triangle[counter1 - 1][counter2 - 1] + triangle[counter1 - 1][counter2];
            }
        }
    }

    // Calculate the maximum number of digits in the triangle
    int maxDigits = 1;
    for (int pcounter1 = 0; pcounter1 < size; pcounter1++) {
        for (int pcounter2 = 0; pcounter2 <= pcounter1; pcounter2++) {
            int numDigits = to_string(triangle[pcounter1][pcounter2]).length();
            if (numDigits > maxDigits) {
                maxDigits = numDigits;
            }
        }
    }

    // Print the triangle with adjusted spacing
    for (int pcounter1 = 0; pcounter1 < size; pcounter1++) {
        for (int t = 0; t < (size - pcounter1 - 1) * (maxDigits + 1) / 2; t++) {
            cout << " ";
        }
        for (int pcounter2 = 0; pcounter2 <= pcounter1; pcounter2++) {
            cout << setw(maxDigits) << triangle[pcounter1][pcounter2] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int dcounter1 = 0; dcounter1 < size; dcounter1++) {
        delete[] triangle[dcounter1];
    }
    delete[] triangle;
}
void withdraw(double* balance, double amount) {
    if(*balance-amount<0){
        cout<<"You are broke"<<endl;
    }
    else{
        *balance-=amount;
        cout<<"New Balance: "<<*balance<<endl;
    }

}

void deposit(double* balance, double amount) {
    if(amount<0){
        cout<<"You are broke. You don’t have enough money. Go away"<<endl;
    }
    else{
        *balance+=amount;
        cout<<"New balance: "<<*balance<<endl;
    }
}


int arr[] = {23,34,2,3,5,12,42,56,89,8};
//declare a void pointer to functions "withdraw" and "deposit" here
void (*ptrWithdraw)(double*, double) = &withdraw;
void (*ptrwDeposit)(double*, double) = &deposit;

int main() {
    // declare a pointer here to keep track of balance in the account and NAME it "balance"
    double* ptrBalannce;
    double harry_account_balance = 0;
    ptrBalannce=&harry_account_balance;
    //initialize the "balance" pointer such that it keeps track of harry_account_balance

    cout << "Harry's Balance at start is: "<<*ptrBalannce; //print the balance here
    cout <<endl;
    double amount  = 1000.00; //setting the amount to be deposited
    (*ptrwDeposit)(ptrBalannce,amount);
    /* Make a deposit of the amount above by calling pointer to the appropriate function   */

    cout << "Balance in harry account is: "<<*ptrBalannce; //print the balance here
    cout<<endl;
    amount = 500; //setting amount to 500
    (*ptrWithdraw)(ptrBalannce,amount);
    /* Withdraw the amount set above by calling pointer to the appropriate function  */

    cout << "Balance after withdrawing cash is: "<<*ptrBalannce; //print the balance here
    cout<<endl;
    amount = 3000; //setting amount to 3000
    
    cout << "Withdrawing "<<amount << " now" <<endl; 
    (*ptrWithdraw)(ptrBalannce,amount);
    /* Withdraw the amount set above by calling pointer to the appropriate function  */

    sortAsc(arr,10);
    for (int i = 0; i < 10; i++) {
    cout << arr[i] << "   ";}
    cout << endl;
    createMatrix();
    cout<<endl;
    matrix2(5);
    cout<<endl;
    pascalTriangle(10);

    return 0;
}

