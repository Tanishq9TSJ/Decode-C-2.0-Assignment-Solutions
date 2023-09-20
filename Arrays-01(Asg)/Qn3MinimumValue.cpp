#include <iostream>
using namespace std;

int main(){
    int arr[] = {9,100,1,2,102,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    int min = arr[0];  //max = INT_MIN
    for(int i=1;i<=n-1;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}