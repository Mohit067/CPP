#include<iostream>
#include<limits.h>
using namespace std;
void print_max(int arr[], int n, int idx, int maxElement){
    if(idx == n){
        cout<<maxElement;
        return;
    }
    if(maxElement < arr[idx]) maxElement = arr[idx];
    print_max(arr, n, idx+1, maxElement);
}

int max_In_Arr(int arr[], int n, int idx){ // for storing an max element
    if(idx == n) return INT_MIN;
    return max(arr[idx], max_In_Arr(arr, n, idx+1));
}
int main(){
    int arr[] = {10,4,7,3,339};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    int maxElement = INT_MIN;
    print_max(arr, n, idx, maxElement);
    cout<<max_In_Arr(arr, n, idx);
}