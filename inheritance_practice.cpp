#include<iostream>
using namespace std;
class t{
    private:
    int pri = 1;
    protected:
    int pro = 2;
    public:
    int pub = 3;
    int getpri(){
        return pri;
    }
};
class t1: public t{
    public:
    int getpro(){
        return pro;
    }
};
int main(){
    t1 obj;
    cout<<obj.pub<<endl;
    cout<<obj.getpro()<<endl;
    cout<<obj.getpri()<<endl;
}