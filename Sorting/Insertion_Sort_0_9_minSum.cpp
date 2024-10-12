#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<n; i++){
        for(int j=i; j>=1; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // for first minimum
    int x = 0;
    for(int i=0; i<n; i++){
        x *= 10;
        x += arr[i];
    }
    cout<<x;
    cout<<endl;
    //for second minimum
    int y = 0; 
    for(int i=n-1; i>=1; i--){
        if(arr[i] != arr[i-1]){
            swap(arr[i] , arr[i-1]);
            break;
        }
    }
    for(int i=0; i<n; i++){
        y *= 10; 
        y += arr[i];
    }
    cout<<y<<endl;

    cout<<x+y;
}