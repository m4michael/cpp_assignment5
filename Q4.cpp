#include <iostream>
using namespace std;

/*Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
between them.*/

int odd(int o){

    if (o%2!=0){

    cout<<o<<" ";
        return 1;
    }

    return 0;


}

int main(){

    int a,b;

    cout<<"Enter two numbers=";
    cin>>a;
    cin>>b;

    cout<<"Odd numbers between "<<a<<" and "<<b<<" are"<<endl;

    for(int i=a;i<=b;i++){

        odd(i);
        
        }

    return 0;

}