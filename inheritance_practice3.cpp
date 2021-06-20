#include<iostream>
using namespace std;
class shape{
    protected:
    int width,height;
    int area,cost;
    public:
    void setwidth(int w){
        width = w;
    }
    void setheight(int h){
        height = h;
    }
};
class cost1:public shape{
    public:
    void getcost(){
        cost = area*70;
    }
};
class area1:public shape{
    public:
    void getarea(){
        cout<<width;
        area = width*height;
    }
};
class data:public shape{
    public:
    void showdata(){
        cout<<area<<endl<<cost;
    }
};
int main(){
    shape obj1;
    obj1.setheight(3);
    obj1.setwidth(4);
    area1 obj3;
    obj3.getarea();
    cost1 obj2;
    obj2.getcost();
    data obj4;
    obj4.showdata();
}