#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
template<class Type,size_t Size>
int index_of_smallest(Type (&arr)[Size]){
    if(Size==0){
        return Type();
    }
    Type min = arr[0];
    int index_of_smallest=0;
    
    for(int i =0;i<Size;i++){
        if(arr[i]<min) {
            min=arr[i];
            index_of_smallest=i;
        }
    }
    return index_of_smallest;
}
template<class Type>
void printArray(Type (&arr),int Size) {
    for (const auto &element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


template<class Type>
void sort(Type* arr,int arr_size){
    if(arr_size<2){
        return;
    }
    else{
        int pivot=arr_size/2;
        Type pivot_value= arr[pivot];
        
        int i=0;
        int j=arr_size-1;
   
          while (i <= j) {
            // Find element on the left that is greater than pivot
            while (arr[i] < pivot_value) {
                i++;
            }

            // Find element on the right that is less than pivot
            while (arr[j] > pivot_value) {
                j--;
            }

            // Swap elements on the left and right
            if (i <= j) {
                std::swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        printArray(arr,arr_size);
        sort(arr, j + 1);
        sort(arr + i, arr_size - i);
    }   
}




int main() {
  int result = multiply<int> ( 2, 5 );
  float result2=multiply<float>(5.53453f,6.322432f);
  int arr1[] = {2,8,20,3,2};
  cout<<array_max(arr1)<<endl;
  int a=4,b=5;
  swap_value(&a,&b);
  int array1 []= {2,3,4,8,1};
  double array2[] = {2.5,3.3,1.5,8.2,4.2};
  cout<<index_of_smallest(array2)<<endl;
    int arr[] = {5, 2, 8, 3, 1, 7, 4, 6};

    // Print the original array
    std::cout << "Original array: ";
    printArray(arr,8);

    // Call the sort function
    sort(arr,8);

    // Print the sorted array
    std::cout << "Sorted array: ";
    printArray(arr,8);
}


