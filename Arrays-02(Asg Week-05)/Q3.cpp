//Check if the given array is sorted or not
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool isSorted(vector<int> &v){
    bool point = true;
    for(int i=0;i<v.size();i++){
        if(v[i] > v[i+1]){
            point = false;
            break;
        }
    }
    if(point){
        return true;
    }else{
        return false;
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
    bool chk = isSorted(v);

    if(chk == true){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
}