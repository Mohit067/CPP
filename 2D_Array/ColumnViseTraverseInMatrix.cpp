#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter matrix rows : ";
    cin>>m;

    int n;
    cout<<"Enter matrix columns : ";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //columns vise traverse
    cout<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
    }
}