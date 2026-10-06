#include<iostream>
using namespace std;
class vehicle {
    public:
       virtual void fun1(int n)=0;
};
class truck : public vehicle {
    public:
        void fun1(int n){
            cout<<"total charge of truck = "<<40*n<<endl;
        }
};
class bus : public truck{
    public :
       void fun1(int n){
            cout<<"total charge of bus = "<<50*n<<endl; 
        }
};
int  main(){
    truck t1;
    bus b1;
    // vehicle v1;
    vehicle* vtpr ;
    truck* tptr = &t1;
    bus* bptr = &b1;
    bptr = (bus*)tptr;
    bptr->fun1(4);


    return 0;
}