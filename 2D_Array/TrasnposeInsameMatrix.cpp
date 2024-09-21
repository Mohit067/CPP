#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cout<<"enter number of row : ";
    cin>>m;

    int m1[m][m];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl;


    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
           int temp = m1[i][j];
           m1[i][j] = m1[j][i];
           m1[j][i] = temp;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }


}