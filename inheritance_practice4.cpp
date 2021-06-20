//heirarchical inheritance
#include<iostream>
using namespace std;
class shape{
    protected:
    int a,b;
    public:
    void get_data(int n, int m){
        a = n;
        b = m;
    }
};
class rectangle:public shape{
    public:
    int get_area(){
        return a*b;
    }
};
class triangle:public shape{
    public:
    int area(){
        return 0.5*a*b;
    }
};
int main(){
    int l,b,ba,h;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    rectangle r;
    r.get_data(l,b);
    cout<<r.get_area()<<endl;
    cout<<"Enter the base and height of triangle"<<endl;
    cin>>ba>>h;
    triangle t;
    t.get_data(ba,h);
    cout<<t.area()<<endl;
}