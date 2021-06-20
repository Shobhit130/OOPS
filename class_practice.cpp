#include<iostream>
using namespace std;
class rectangle{
    private:
    int width,height;
    public:
    void set_values(int,int);
    int area(){
        return(width*height);
    }
};
void rectangle::set_values(int a, int b){
    width=a;
    height=b;
}
int main(){
    rectangle obj1,obj2;
    obj1.set_values(3,4);
    obj2.set_values(5,4);
    cout<<"Area of rectangle 1: "<<obj1.area()<<endl;
    cout<<"Area of rectangle 2: "<<obj2.area();
    return 0;
}