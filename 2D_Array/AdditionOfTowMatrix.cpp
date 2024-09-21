#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter number of row : ";
    cin>>m;

    int n;
    cout<<"enter number of columns : ";
    cin>>n;

    int m1[m][n];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl;
    int m2[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>m2[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<m1[i][j] + m2[i][j]<<" ";
        }
        cout<<endl;
    }

}