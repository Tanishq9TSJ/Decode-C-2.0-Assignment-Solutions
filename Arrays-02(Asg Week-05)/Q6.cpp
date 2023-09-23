//Find the unique number in a given Array where all the elements are being repeated twice with one
//value being unique.
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

int Unique(vector<int> &v){
    bool chk = false;
    int u = INT_MIN;
    int point = INT_MIN;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i] != point){
            for(int j=i+1;j<v.size();j++){
                if(v[i] == v[j]){
                    point = v[i];
                    break;
                }else{
                    chk = true;
                    u = v[i];
                    break;
                }
            }
        } 
    }
    return u;
}

int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);

    display(v);
    int U = Unique(v);
    display(v);
    
    if(U != INT_MIN){
        cout<<"Unique element is there "<< U<<endl;
    }else{
        cout<<"Unique element is not there"<<endl;
    
    }
    
    
    return 0;
}