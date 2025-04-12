#include<iostream>
using namespace std;
int main() {
    int arr[] = {4,3,6,2,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    //Cyclic Sort
    int i = 0;
    while(i<n){
        int currentIdx = arr[i] - 1;
        if(i == currentIdx) i++;
        else swap(arr[currentIdx], arr[i]);
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}