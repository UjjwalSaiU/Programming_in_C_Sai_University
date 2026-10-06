#include<iostream>
using namespace std;
class complex{
    int* arr = new int[5];
    public:
    complex (int a , int b){
        this->arr[0] = a;
        this->arr[1] = b;
    }
    void get_details(void){
        cout<<"x "<<arr[0]<<"y "<<arr[1]<<endl;
    }
    ~complex(){
        delete[] arr;
    }
};
int main(){
    complex c(1,2);
    c.get_details();
    return 0;
}