#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {12,4,6,23,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // selection sort for kth passes
    for(int i=0; i<k; i++){
        // int min = INT_MAX;
        // int mindx = -1;
        int min = arr[i];
        int mindx = i;
        for(int j=i; j<n; j++){
            if(min > arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    cout<<endl;
    //second half
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
}