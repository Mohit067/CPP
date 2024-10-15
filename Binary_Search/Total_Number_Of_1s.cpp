#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //first we find first occurance of 1's
    int lo = 0;
    int hi = n-1;
    int idx = -1;//first place of 1's
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == 1){
            if(arr[mid-1] == 1){
                hi = mid-1;
            }
            else{
                idx = mid;
                break;
            }
        }
        else if(arr[mid] == 0){
            lo = mid+1;
        }
    }
    int ans = 0;
    if(idx != -1){
        ans = abs(n-idx);
    }
    cout << "total max  ones : "<< ans << endl;
}   