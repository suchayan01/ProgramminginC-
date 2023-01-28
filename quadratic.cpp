#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    float root1, root2;
    cout<<"Enter the value for a,b,c";
    cin>>a>>b>>c;
    root1= (-b+(b*b-4*a*c))/(2*a);
    root2=(-b-(b*b-4*a*c))/(2*a);
    cout<<root1<<" ";
    cout<<root2;
    return 0;
}