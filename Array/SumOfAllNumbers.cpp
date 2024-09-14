#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,6,7,8,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<sum;
}