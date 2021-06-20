// #include<iostream>
// using namespace std;
// template <class T>
// class test{
//     T n1,n2;
//     public:
//     test(T num1,T num2);
//     void add();
//     void sub();
//     void mul();
//     void div();
//     void disp(){
//         add();
//         sub();
//         mul();
//         div();
//     }
// };
// template <class T>
// test<T>::test(T num1,T num2){
//     n1 = num1;
//     n2 = num2;
// }
// template <class T>
// void test<T>::add(){
//     cout<<"Addition: "<<n1+n2<<endl;
// }
// template <class T>
// void test<T>::sub(){
//     cout<<"Subtraction: "<<n1-n2<<endl;
// }
// template <class T>
// void test<T>::mul(){
//     cout<<"Multiplication: "<<n1*n2<<endl;
// }
// template <class T>
// void test<T>::div(){
//     cout<<"Division: "<<n1/n2<<endl;
// }
// int main(){
//     test<int>t1(4,2);
//     test<double>t2(4.2,2.2);
//     t1.disp();
//     t2.disp();
// }
// #include<iostream>
// using namespace std;
// template<class T, class U>
// class t{
//     T a;
//     U b;
//     public:
//     t(T n1, U n2);
//     void disp();
// };
// template<class T, class U>
// t<T,U>::t(T n1, U n2){
//     a = n1;
//     b = n2;
// }
// template<class T, class U>
// void t<T,U>::disp(){
//     cout<<"The value of a = "<<a<<endl<<"The value of b = "<<b<<endl;
// }
// int main(){
//     t<int,int>t1(2,3);
//     t<char,char>t2('c','z');
//     t<char,double>t3('q',3.4);   
//     t1.disp();
//     t2.disp();
//     t3.disp();
// }
#include<iostream>
using namespace std;
template<class T, class U>
class t{
    T a;
    U b;
    public:
    t(){
        a = 0;
        b = 0;
    }
    void get_data(){
        cout<<"Enter the values of a and b: "<<endl;
        cin>>a;
        cin>>b;
    }
    void disp(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main(){
    t<char,int>t1;
    cout<<"Enter char and int data:" <<endl;
    t1.get_data();
    t1.disp();
    t<int,float>t2;
    cout<<"Enter int and float data: "<<endl;
    t2.get_data();
    t2.disp();
}