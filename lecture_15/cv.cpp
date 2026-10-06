#include<iostream>
using namespace std;
class A{
    protected:
    // private:
        int a;
    public:
        A(int t):a(t){
        }
        void get_details(void){
            cout<<"a is "<<a<<endl;
        }
};
class B :public A{
    public:
        B(int d):A(d){
            cout<<"B object has been created "<<a<<endl;
        }
};
int main(){
    B b(5);
    b.get_details();
    return 0;
}