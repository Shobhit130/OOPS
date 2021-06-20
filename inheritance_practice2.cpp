#include<iostream>
using namespace std;
class shape{
    protected:
    int width,height;
};
class data:public shape{
    public:
    void setwidth(int w){
        width = w;
    }
    void setheight(int h){
        height = h;
    }
};
class area:public data{
    public:
    int getarea(){
        return width*height;
    }
};
int main(){
    area obj;
    obj.setheight(3);
    obj.setwidth(4);
    cout<<obj.getarea();
}