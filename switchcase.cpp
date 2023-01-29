#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Provide the day num";
    cin>>x;
    
    switch (x)
    {
    case 1:cout<<"Its monday";
        break;
    case 2: cout<<" Its Tues";
        break;
        
    default:cout<<"Its an invalid num";
        break;
    }
    return 0;
}