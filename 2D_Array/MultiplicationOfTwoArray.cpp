#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter first matrix rows : ";
    cin>>m;

    int n;
    cout<<"Enter frist matrix columns : ";
    cin>>n;

    int p;
    cout<<"Enter second matrix rows : ";
    cin>>p;

    int q;
    cout<<"Enter secodn matrix columns : ";
    cin>>q;

    if(n == p){
        int a[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){

                res[i][j] = 0;
                for(int k=0; k<p; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication not allowed !!!";
    }
}