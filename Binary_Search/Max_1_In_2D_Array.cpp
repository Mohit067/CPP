#include<iostream>
using namespace std;
int main(){
    
    int arr[4][5] = {{1,1,1,1,1},{0,1,1,1,1},{0,0,1,1,1},{0,0,1,1,1}};
    int m = 4;
    int n = 5;
    int rowMaxOnes = 0;
    int row = 0;
    for(int i=0; i<m; i++){
        //first we find first occurance of 1's
        int lo = 0;
        int hi = n-1;
        int idx = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;

            if(arr[i][mid] == 1){
                if(mid == 0 || arr[i][mid-1] == 0){//checking is this first occurance of one's or not
                    idx = mid;
                    break;
                }
                else{
                    hi = mid-1;
                }
            }
            else {
                lo = mid+1;
            }
        }
        int countOne = 0;//calculate one for every rowMaxOness
        if(idx != -1){
            countOne = n-idx;
        }
        if(countOne > rowMaxOnes){//calculating row that have max ones 
                rowMaxOnes = countOne;
                row = i;
            }
        cout << "Row " << i << " has " << countOne << " ones." << endl;
    }
    cout<<"max one contain row number : "<<row<<" and Number of one is "<<rowMaxOnes;
}   