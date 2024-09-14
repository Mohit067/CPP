#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,6,7,8,4,6};
    int x = sizeof(arr)/sizeof(arr[0]);
    cout<<x;
}