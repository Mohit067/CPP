#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 3;
    int lo = 0;
    int hi = n-1;

    //if most occurance element present in the array
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;

        if(arr[mid] == x){
            if(arr[mid-1] == x){
                hi = mid-1;
            }
            else{  //it means (arr[mid-1] != x) tab
            // wahi mid hi first indx hai most occurance element ka
                cout<<mid;
                break;
            }
        }
        else if(arr[mid] > x) hi = mid-1;
        else lo = mid+1;
    }




}