#include <iostream>
using namespace std;

//Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

double Area(int r){

    return 3.14*r*r;
}

double Circumference(int r){

    return  2*3.14*r;

}

int main(){

    int r;

    cout<<"Enter the radius of circle=";
    cin>>r;
    cout<<endl<<"The Area of circle is="<<Area(r)<<endl;
    cout<<"Circumference of circle is="<<Circumference(r);

    return 0;
}