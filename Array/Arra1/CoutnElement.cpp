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
    cout<<"Enter the element : ";
    cin>>x;
    int count = 0;
    for(int i=0; i<n; i++){
        if(x < arr[i]){
            count++;
        }
    }
    cout<<count;
}