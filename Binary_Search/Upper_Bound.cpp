#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,3,7,12,15,17,38,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 13;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid] > x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false) cout<<arr[lo];
}