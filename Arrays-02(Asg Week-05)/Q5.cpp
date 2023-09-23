//Given an array of integers, change the value of all odd indexed elements to its second multiple
//and increment all even indexed values by 10.
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Change(vector<int> &v){
    for(int i=0;i<v.size();i++){
        if(i%2 == 0){
            v[i] = v[i]*2;
        }else {
            v[i] = v[i]+10;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);

    display(v);
    Change(v);
    display(v);
    return 0;
}