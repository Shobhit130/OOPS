#include<iostream>
using namespace std;
class t{
    int h;
    int m;
    public:
    t(){
        h=m=0;
    }
    void input(){
        cin>>h>>m;
    }
    void output(){
        cout<<h<<" "<<m<<endl;
    }
    void operator ++(){
        h = ++h;
        if(m==59){
            m=0;
            h = ++h;
        }else{
            m = ++m;
        }
    }
   
};
int main(){
    t t1,res;
    cout<<"Enter the hours and minutes"<<endl;
    t1.input();
    ++t1;
    t1.output();
    return 0;
}