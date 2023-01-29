#include<iostream>
using namespace std;
int main(){
    int a[]={11,22,43,54,35,66,57,78,659};
    for (auto &x: a){
        cout<<++x<< endl;
    }
    cout<<a;
    return 0;
}