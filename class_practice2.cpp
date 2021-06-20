#include<iostream>
using namespace std;
class test{
    private:
        int d;
    public:
        void set_data(int data){
                d=data;
        }
        void show_data(){
            cout<<d<<endl;
        }
};
int main(){
    test t1,t2;
    t1.set_data(2);
    t1.show_data();
    t2.set_data(3);
    t2.show_data();
    return 0;
}