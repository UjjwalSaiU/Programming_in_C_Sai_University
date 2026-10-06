#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        int Id;
    public:
        Employee(string name , int a){
            this->name = name;
            this->Id  =a;
            cout<<"Object has been created "<<endl;
        }
        void get_value(void){
            cout<<"name "<<this->name<<" Id "<<this->Id<<endl;
        }

        

};
class faculty : public Employee{
    private :
        string department;
        
    public:
    faculty(int Id,string dep ,string name):Employee(name,Id){
        this->department = "scds";
    }
    void get_values_2(void){
        cout<<"department "<<this->department<<endl;
    }
};
class dean : public faculty{
    private:
        string work_load;
    public:
    dean(string name,int Id , string dep , string wl):faculty(Id ,dep,name ){
        this->work_load = wl;
    }
    void get_value_3(void){
        cout<<"work_load "<<this->work_load<<endl;
    }
};
int main(){
    dean d1("anyone",12,"scds","too_much");
    d1.get_value();
    d1.get_values_2();
    d1.get_value_3();

    return 0;
}