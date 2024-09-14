#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    cout<<"Enter elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element thay you want to be search : ";
    cin>>x;

    bool flag = false; // element not fount
    for(int i=0; i<n; i++){
        if(arr[i] == x) flag = true;
    }
    if(flag == true) cout<<"Element Present";
    else cout<<"404 Not fount";
}