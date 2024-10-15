#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,5,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = -1;

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == mid) lo = mid+1;//all lowest value are existing upto mid
        else{
            ans = mid;
            hi = mid-1;//missing something so we move on hi=mid-1
        }
    }
    cout<<ans;
}   