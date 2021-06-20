#include<iostream>
using namespace std;
class gst{
    public:
    double total;
    int cost;
    void get_data(){
        cout<<"Enter the cost: ";
        cin>>cost;
    }
    virtual void display()=0;
};
class solar:public gst{
    public:
    void display(){
        total = total + 0.05*cost;
        total+=cost;
        cout<<total<<endl;
    }
};
class electric:public gst{
    public:
    void display(){
        total = total + 0.12*cost;
        total+=cost;
        cout<<total<<endl;
    }
};
int main(){
    gst *g;
    solar s;
    g = &s;
    g->get_data();
    g->display();
    electric e;
    g = &e;
    g->get_data();
    g->display();
}