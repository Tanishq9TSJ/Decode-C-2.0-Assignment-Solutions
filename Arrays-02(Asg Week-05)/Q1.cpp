//Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int Count(vector<int> &v, int k){
    int c = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] > k){
            c++;
        }
    }
    return c;
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
    int StrictlyGreater = Count(v, 5);
    cout<<"Elements strictly greater than 5 is: "<<StrictlyGreater<<endl;
    return 0;
}