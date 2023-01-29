#include<iostream>
using namespace std;
int main(){
    cout<<"enter 2 nos m and n "<<endl;
    int m,n;
    cin>>m>>n;
    while(m!=n){
        if (m>n){
            m-=n;
        }
        else{
            n-=m;
        }
    }
    cout<<"GCD "<< m;
    return 0;
}