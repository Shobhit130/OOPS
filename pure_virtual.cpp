#include<iostream>
using namespace std;
//abstract class
class base{
    public:
    //pure vitual function
    virtual void disp() = 0;
};
//definition of pure virtual will be in derived class
class der:public base{
    public:
    void disp(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    der obj;
    obj.disp();
    //cannot make object of base class(abstract class)
    base *b;
    b = &obj;
    b->disp();  
}