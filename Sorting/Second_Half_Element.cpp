#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,4,6,23,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<((n/2)+1); i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //second half
    for(int i=n/2; i<n; i++){
        cout<<arr[i]<<" ";
    }
}