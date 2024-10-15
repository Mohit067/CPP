#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 5;

    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            cout<<mid;
            break;
        }
        else if(arr[mid] > target) hi = mid-1;
        else lo = mid+1;
    } 
}