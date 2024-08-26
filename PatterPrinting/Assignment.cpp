#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    
    int m;
    cout<<"Enter number of row : ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
        *
        **
        ***
        ****
        ***
        **
        *
    */




   for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    /**
            ******
            *    *
            *    *
            ******
     */




    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
               ****
              ****
             ****
            ****
    */



    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
            *
            **
            ***
            ****
            ***
            **
            *
    
    */
}