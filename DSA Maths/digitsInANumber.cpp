#include<iostream>
using namespace std;
int main(){
    int n=35647;
    int count=0;
    while (n!=0)
    {
        int digit=n%10;
        count++;
        n=n/10;
    }
    
    cout<< count << endl;
}