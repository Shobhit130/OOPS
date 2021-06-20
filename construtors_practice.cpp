// #include<iostream>
// using namespace std;
// class add{
//     int m,n;
//     public:
//         add();
//         add(int,int);
// };
// add::add(){
//     cout<<"Adding..."<<endl;
// }
// add::add(int x,int y){
//     m=x;
//     n=y;
//     cout<<m+n;
// }
// int main(){
//     add obj1;
//     add obj(3,4);
//     return 0;
// }
#include<iostream>
using namespace std;
class test{
    public:
    int a;
    test(){
        a=0;
        cout<<a<<endl;
    }
    test(int pa){
        a=pa;
        cout<<a;
    }
    test(test &t3){
        a=t3.a;
        cout<<"\nt3.a="<<t3.a;
    }
};
int main(){
    test t2;
    test t(6);
    cout<<"\n"<<t.a;
    test t1(t);
    cout<<"\n"<<t1.a;
    return 0;
}