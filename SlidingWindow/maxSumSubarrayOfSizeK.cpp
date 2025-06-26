#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,7,6,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int prevSum = 0;
    int maxSum = INT64_MIN;
    for(int i=0; i<k; i++){
        prevSum += arr[i];
    }
    maxSum = prevSum;
    // sliding window approach
    int i = 1;
    int j = k;
    int maxIdx = -1;
    while(j<n){
        // currentSum = previousSum + last element of current window - first element of previous window
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
}