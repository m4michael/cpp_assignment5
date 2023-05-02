#include <iostream>
using namespace std;
/* Given two numbers a and b, write a program to print all the prime numbers present between a and b*/

bool isPrime(int p){

    if(p<2){
        return false;
    }

    for(int i=2;i<p;i++){

        if(p%i==0){
            return false;
        }
    }



return true;
}


int main(){
    int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a;
cin>>b;

cout<<"Prime numbers between "<<a<<" and "<<b<<" are"<<endl;

for(int i=a;i<=b;i++){

    if(isPrime(i)){
    cout<<i<<endl;
}
}

return 0;

}

