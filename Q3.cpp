#include <iostream>
using namespace std;

//Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

void Age(int a){

    if(a>=18){

        cout<<"Eligible";
    }

    else{

        cout<<"Not eligible";
    }
}

int main(){

    int age;

    cout<<"Enter the Age of person=";

    cin>>age;

    Age(age);

    return 0;
}