#include<iostream>
using namespace std;
class shape{
    public:
    double b1,b2,h,a1,a2,s1,s2,r,s;
    void get_data(){
        cin>>b1>>b2>>h>>a1>>a2>>s1>>s2>>r>>s;
    }
    virtual void area()=0;
    virtual void surface_area(){}
};
class trapezoid:public shape{
    public:
    void area(){
        double a;
        a = (0.5*(b1+b2))*h;
        cout<<a<<endl;
    }
};
class ellipse:public shape{
    public:
    void area(){
        double a;
        a = 3.14*a1*a2;
        cout<<a<<endl;
    }
};
class parallelogram:public shape{
    public:
    void area(){
        double a;
        a = s1*s2;
        cout<<a<<endl;
    }
};
class cone:public shape{
    public:
    void area(){
        double a;
        a = 3.14*r*s;
        cout<<a<<endl;
    }
    void surface_area(){
        double surface;
        surface  = (3.14*r*s)+(3.14*r*r);
        cout<<surface<<endl;
    }
};
int main(){
    shape *obj;
    obj->get_data();
    trapezoid t;
    obj = &t;
    obj->area();
    ellipse e;
    obj = &e;
    obj->area();
    parallelogram p;
    obj = &p;
    obj->area();
    cone c;
    obj = &c;
    obj->area();
    obj->surface_area();
    return 0;
}