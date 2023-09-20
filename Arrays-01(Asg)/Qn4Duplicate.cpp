//Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
//{9,102,1,2,102,4,5,6}
int main(){
    int arr[] = {1,2,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(int);
    bool dup = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup = true;
            } 
        }
    }
    cout<<dup;
    return 0;
}

