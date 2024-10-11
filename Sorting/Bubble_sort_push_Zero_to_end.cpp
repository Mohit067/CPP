#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,5,0,7,4,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=i+1; j<n-1-i; j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) {
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}