//If an array arr contains n elements, then check if the given array is a palindrome or not .
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

bool isPalindrome(vector<int> &v){
    bool chk = false;
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        if(v[i] != v[j]){
            chk = true;
        }
    }
    if(chk){
        return false;
    }else{
        return true;
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(1);

    display(v);

    bool P = isPalindrome(v);
    if(P){
        cout<<"Given array is palindrome";
    }else{
        cout<<"Given array is not palindrome";
    }
    return 0;
}