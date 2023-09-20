//Calculate the product of all the elements in the given array.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    int ans = 1;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0;i<v.size();i++){
        ans = ans*v[i];
    }

    cout<<"Required answer: "<< ans;
    return 0;   
}