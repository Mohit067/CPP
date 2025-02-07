#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;

    int leftWays = maze(sr+1, sc, er, ec);
    int rightWays = maze(sr, sc+1, er, ec);

    int total = leftWays + rightWays;
    return total;
}
int maze2(int row, int col){
    if(row < 1 || col < 1) return 0;
    if(row==1 && col==1) return 1;

    int leftWays = maze2(row, col-1); //right or left
    int rightWays = maze2(row-1, col);//down or up

    int total = leftWays + rightWays;
    return total;
}
void printMazePath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printMazePath(sr, sc+1, er, ec, s+'R');
    printMazePath(sr+1, sc, er, ec, s+'D');
}
int main(){
    cout<<maze(1,1,5,5);
    cout<<endl;
    cout<<maze(1,1,4,4);
    cout<<endl;
    printMazePath(1,1,3,3,"");
}

