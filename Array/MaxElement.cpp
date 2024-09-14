#include<iostream>
#include<climits>
// #include<algorithm>
// #include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    cout<<"Enter elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


//for = maximum one value
    /**
      
      
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum Element is "<<max;


    */



//for 2nd maximum value
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else{
            max2 = max(max2, arr[i]);
        }
    }
    cout<<max1<<endl;
    if(max2 == INT_MIN) cout<<"No second maximum";
    cout<<max2;
}