#include<iostream>
using namespace std;
class base{
    public:
    void disp(){
        cout<<"Base class disp"<<endl;
    }
    virtual void show(){
        cout<<"Base class show"<<endl;
    }
};
class der:public base{
    void disp(){
        cout<<"Derived class disp"<<endl;
    }
    void show(){
        cout<<"Derived class show"<<endl;
    }
};
int main(){
    base *b;
    base obj;
    b = &obj;
    b->disp();
    b->show();
    der d;
    b = &d;
    b->disp();
    b->show();
}