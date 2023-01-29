#include<iostream>
using namespace std;
int main(){
    int num, rev_num=0, tmp;;
    cout<<"Provide the num";
    cin>>num;
    tmp=num;
    while(tmp>0){
        rev_num+=tmp%10;
        tmp/=10;
    }
    if (rev_num==num){
        cout<<"Its a pallindrome";
    }
    else{
        cout<<"No its not a pallindrome";
    }
    return 0;
}