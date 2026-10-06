#include "hed.hpp"
#include<iostream>
using namespace std;
complex::complex(int a,int b){
    this->a = a;
    this->b = b;
}
void complex::getter(void){
    cout<<"x "<<this->a<<" y "<<this->b<<endl;
}