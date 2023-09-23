//Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int evenSum(vector<int>& v){
    int sum = 0;
    for(int i=0;i<v.size();i++){
        if(i%2 != 0){
            sum = sum + v[i];
        }
    }
    return sum;
}

int oddSum(vector<int>& v){
    int sum = 0;
    for(int i=0;i<v.size();i++){
        if(i%2 == 0){
            sum = sum + v[i];
        }
    }
    return sum;
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
    int E = evenSum(v);
    int O = oddSum(v);

    cout<<"Even Sum: "<<E<<endl;
    cout<<"Odd Sum: "<<O<<endl;
    return 0;
}