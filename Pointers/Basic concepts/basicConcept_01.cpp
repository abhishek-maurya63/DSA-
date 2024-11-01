#include <iostream>
using namespace std;
int main()
{
    // accessing memory address
    // int a = 10;
    // int *ptr = &a;
    // int** ptr1=&ptr;
    // cout << ptr<< endl;
    // cout << *ptr << endl; 
    // cout<< **ptr1<<endl;

    // int *ptr=NULL  ;
    // cout <<*ptr;

    // array pointers
    // int arr[]={1,2,3,4,5};
    // cout << arr <<endl;
    // cout<<*arr<< endl;

    // pointer arithmatics

    int a=10;
    int *ptr=&a;
    cout<< ptr << endl;
    cout << *ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}