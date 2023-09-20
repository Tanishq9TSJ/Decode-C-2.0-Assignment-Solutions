//Write a program to find the product of two numbers using pointers.
#include <iostream>
using namespace std;

int product(int *x, int *y){
    return *x * (*y);
}
int main(){
    int x = 6;
    int y = 7;
    int ans = product(&x,&y);
    cout<<ans<<endl;
    return 0;
}