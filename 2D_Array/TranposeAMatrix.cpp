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

/*
        //same matrix
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<m1[j][i]<<" ";
            }
            cout<<endl;
        }
*/

    int t[n][m]; //new matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = m1[j][i];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }




}