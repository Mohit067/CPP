#include<iostream>
#include<vector>
using namespace std;
void removeNumber(vector<int>& v, int arr[], int n, int idx){
    if(idx == n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        return;
    }
    if(arr[idx] != 4){
        v.push_back(arr[idx]); 
        removeNumber(v, arr, n, idx+1);
    } else {
        removeNumber(v, arr, n, idx+1);
    }

}
int main(){
    int arr[] = {1,2,3,4,1,4,6,1,3,1,5,7,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    vector<int> v;
    removeNumber(v, arr, n, idx);
    // for(int i=0; i<n; i++){
    //     if(arr[i] != 1) v.push_back(arr[i]);  
    // }
    // int m = v.size();
    // for(int i=0; i<m; i++){
    //     cout<<v[i]<<" ";
    // }
}
