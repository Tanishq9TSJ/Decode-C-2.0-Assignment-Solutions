//Find the second largest element in the given Array in one pass.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,18,9,4,6};
    int n = sizeof(arr)/sizeof(int);

    int max1 = INT_MIN;  //max = INT_MIN
    int max2 = INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] != max1 && max2 < arr[i])
        {
            max2 = arr[i];
        }
    }
    cout<<max1<<endl;
    cout<<max2<<endl;
    return 0;
}