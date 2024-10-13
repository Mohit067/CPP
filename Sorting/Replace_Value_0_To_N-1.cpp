#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {18,35,8,22,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v(n,0);
    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;//for finding minimum element
        int mindx = -1; //for finding minimum index
        for(int j=0; j<n; j++){
            if(v[j] == 1) continue;//if visited then do not nothing
            else{
                if(min > arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; //visited
        x++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}