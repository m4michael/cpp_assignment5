#include <iostream>
using namespace std;

//Q1 - Write a function to print squares of the first 5 natural numbers.

int square(int num){

return num*num;


}

int main(){

cout<<"The square of first 5 natural numbers="<<endl;

for(int i=1;i<=5;i++){

    cout<<square(i)<<endl;
}

    return 0;

}