#include<iostream>
using namespace std;
class result{
    int x,y;
    friend void add(result r);
    friend void sub(result r);
    public:
    void get_data();
};
void result::get_data(){
    cin>>x;
    cin>>y;
}
void add(result r){
    cout<<(r.x+r.y)<<endl;
}
void sub(result r){
    cout<<(r.x-r.y)<<endl;
}
int main(){
    result r;
    r.get_data();
    add(r);
    sub(r);
    return 0;
}