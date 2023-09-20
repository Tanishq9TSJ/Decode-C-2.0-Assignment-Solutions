//WAP to find the smallest missing positive element in the sorted Array that contains only
//positive elements.
#include <iostream>
using namespace std;
//{9,102,1,2,102,4,5,6}
int main()
{
    int arr[] = {0,1,2,3,5,6,9,11};
    int n = sizeof(arr)/sizeof(int);
    bool chk = false;
    int a = 0;
    for(int i=0; i<n; i++)
    {    
        if(arr[i] != a)
        {
            cout<<"Smallest missing element: "<<a<<endl;
            chk = true;
            break;
        }
        else a++;   
    } 
    if(chk == false){
        cout<<"Smallest missing element: "<<a<<endl;
    }
    return 0;
}
