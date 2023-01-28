#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Write your name";
    // cin>>name;
    getline(cin,name); // add the contents until the enter is entered 
    cout<<"Welcome "<<name;
    return 0;
} // namespace std
