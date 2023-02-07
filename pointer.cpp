#include<iostream>
using namespace std;
int main(){
        int a[]= {234, 56};
        cout<<a[0]<<endl;
        cout<< &a[0]<<endl;
        int *p= &a[0];  // declaration and assignment
        cout<<p<<endl;
        cout<<*p; // dereferencing
    return 0;
} // namespace std;
