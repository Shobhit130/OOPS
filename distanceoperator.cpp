// #include<iostream>
// using namespace std;
// class d{
//     int km;
//     int m;
//     public:
//     d(){
//         km=m=0;
//     }
//     void input(){
//         cin>>km>>m;
//     }
//     void operator ==(d obj){
//         if(km == obj.km && m == obj.m){
//             cout<<"Equal"<<endl;
//         }else{
//             cout<<"Not equal"<<endl;
//         }
//     }
// };
// int main(){
//     d d1,d2;
//     cout<<"Enter the first distance"<<endl;
//     d1.input();
//     cout<<"Enter the second distance"<<endl;
//     d2.input();
//     d1==d2;
//     return 0;
// }
#include<iostream>
using namespace std;
class d{
    int km;
    int m;
    public:
    d(){
        km=m=0;
    }
    void input(){
        cin>>km>>m;
    }
    bool operator ==(d obj){
        if(km == obj.km && m == obj.m){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    d d1,d2;
    cout<<"Enter the first distance"<<endl;
    d1.input();
    cout<<"Enter the second distance"<<endl;
    d2.input();
    if(d1==d2){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not equal"<<endl;
    }
}