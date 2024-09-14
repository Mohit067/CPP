#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int* ptr = arr;
    int* ptr1 = &arr[0];
    
    cout<<ptr;
    cout<<endl;
    cout<<ptr1;
    cout<<endl;


    for(int i=0; i<size; i++){//print  the array
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<size; i++){//print the array
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<ptr[i]<<" ";//print the array
    }

    *ptr = 7;//change the array element at index 0
    ptr++;//here we are going next index of array 1
    *ptr = 9;//change value of index 1
    ptr--;//to jump old index 1 to 0
    cout<<endl;

    for(int i=0; i<size; i++){//print  the array
        cout<<arr[i]<<" ";
    }


}           