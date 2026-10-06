#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    complex(int a, int b){
        this->a = a;
        this->b = b;
        cout<<"object created"<<endl;

    }
    complex(void){
        this->a = 0;
        this->b = 0;
        cout<<"object created"<<endl;

    }
    complex operator+(const complex& obj){
        complex c1(0,0);
        c1.a =this->a +obj.a;
        c1.b = this->b + obj.b;
        return c1;
    }
    void getter(void){
        cout<<"x :"<<this->a<<" y:"<<this->b<<endl;
    }
    ~complex(void){
        cout<<"destroyed object "<<this<<endl;
    }

};
int main(){
    complex c2(0,0),c3,c4(7,5);
    // c2 = c3+c4;
    c2.getter();

    return 0;
}