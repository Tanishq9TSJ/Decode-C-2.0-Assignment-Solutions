//WAP to find the largest three elements in the array.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void ThreeLarg(vector<int>& v){
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>v.size()-4;i--){
        cout<<v[i]<<"  ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);

    display(v);
    ThreeLarg(v);
    return 0;
}