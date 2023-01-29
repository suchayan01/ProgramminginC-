#include<iostream>
using namespace std;
int main(){
    int i=10;
    do{
        cout<<i--<<endl;
        // i++;
    }
    while(i>0);
    sample();
    return 0;
}

void sample(){
    while(1){
        cout<<"Hello"<<endl;
    }
}