#include<iostream>
using namespace std;
class op{
    int a;
    public:
    void input(){
        cin>>a;
    }
    bool operator >(op obj){
        if(a>obj.a){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    op o1,o2,res1,res2;
    o1.input();
    o2.input();
    if(o1>o2){
        cout<<"o1 is greater"<<endl;
    }else{
        cout<<"o1 is smaller"<<endl;
    }
    return 0;
}