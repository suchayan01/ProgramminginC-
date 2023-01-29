#include<iostream>
using namespace std;

int main(){
    enum days {mon, tue = 7, thur, fri, sat, sun=0};
    cout<<mon<<"-------------------------"<<endl;
    days d= tue;
    // cout<<days[0]<<"\n";
    if (d<=thur){
        cout<<"do nothing";
    }
    else{
        cout<<"today is "<<d;
    }
    return 0;
}