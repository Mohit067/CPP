#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,7,1,5,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j=i; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                minIdx = j;
            }
        swap(arr[i] , arr[minIdx]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } //T.C = O(n*2)
}