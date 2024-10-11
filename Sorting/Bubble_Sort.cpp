#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,5,7,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    // with O(n*2) comlexity
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    // this is also O(n*2) complesity but reduce many terms
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=i+1; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
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