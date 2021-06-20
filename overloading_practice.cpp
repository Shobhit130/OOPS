// #include<iostream>
// using namespace std;
// class vector{
//     int num;
//     int vect[20];
//     public:
//     friend istream& operator >>(istream& input,vector& obj);
//     friend ostream& operator <<(ostream& output,vector& obj);
//     vector operator+(vector&);
//     vector operator-(vector&);
//     int operator*(vector&);
//     int operator[](int);
// };
// int vector::operator[](int ele){
//     return vect[ele];
// }
// vector vector::operator+(vector& obj){
//     vector v = obj;
//     for(int i=0;i<obj.num;i++){
//         v.vect[i] = vect[i] + obj.vect[i];
//     }
//     return v;
// }
// vector vector::operator-(vector &obj){
//     vector v = obj;
//     for(int i=0;i<obj.num;i++){
//         v.vect[i] = vect[i] - obj.vect[i];
//     }
//     return v;
// }
// int vector::operator*(vector& obj){
//     int p;
//     for(int i=0;i<obj.num;i++){
//         p += vect[i] * obj.vect[i];
//     }
//     return p;
// }
// istream& operator>>(istream& input, vector& obj){
//     input>>obj.num;
//     for(int i=0;i<obj.num;i++){
//         input>>obj.vect[i];
//     }
//     return input;
// }
// ostream& operator<<(ostream& output,vector& obj){
//     for(int i=0;i<obj.num;i++){
//         output<<obj.vect[i]<<" ";
//     }
//     return output;
// }
// int main(){
//     vector v1,v2,v3;
//     int pro;
//     cin>>v1;
//     cin>>v2;
//     v3 = v1+v2;
//     cout<<v3<<endl;
//     v3 = v1-v2;
//     cout<<v3<<endl;
//     pro = v1*v2;
//     cout<<pro<<endl;
// }
// #include<iostream>
// using namespace std;
// class complex{
//     int real;
//     int imag;
//     public:
//     friend istream& operator>>(istream& input,complex& obj);
//     friend ostream& operator<<(ostream& output,complex& obj);
//     complex operator+(complex&);
//     complex operator-(complex&);
// };
// istream& operator>>(istream& input,complex& obj){
//     input>>obj.real;
//     input>>obj.imag;
//     return input;
// }
// ostream& operator<<(ostream& output,complex& obj){
//     output<<obj.real<<obj.imag;
//     return output;
// }
// complex complex::operator+(complex& obj){
//     complex c;
//     c.real = real + obj.real;
//     c.imag = imag + obj.imag;
//     return c;
// }
// complex complex::operator-(complex& obj){
//     complex c;
//     c.real = real - obj.real;
//     c.imag = imag - obj.imag;
//     return c;
// }
// int main(){
//     complex c1,c2,c3;
//     cin>>c1;
//     cin>>c2;
//     c3 = c1+c2;
//     cout<<c3<<endl;
//     c3 = c1-c2;
//     cout<<c3<<endl;
// }
// #include<iostream>
// using namespace std;
// class base{
//     public:
//     virtual void show(){
//         cout<<"Base class show"<<endl;
//     }
// };
// class derived:public base{
//     public:
//     void show(){
//         cout<<"Derived class show"<<endl;
//     }
// };
// int main(){
//     derived d;
//     base b1;
//     b1.show();
//     d.show();
// }
// #include<iostream>
// using namespace std;
// template<class T>
// class op{
//     T n1,n2;
//     public:
//     void get_data(T num1, T num2){
//         n1 = num1;
//         n2 = num2;
//     }
//     T add();
//     T sub();
//     T mul();
//     T div();
//     void disp();
// };  
// template<class T>
// T op<T>::add(){
//     return n1+n2;
// }
// template<class T>
// T op<T>::sub(){
//     return n1-n2;
// }
// template<class T>
// T op<T>::mul(){
//     return n1*n2;
// }
// template<class T>
// T op<T>::div(){
//     return n1/n2;
// }
// template<class T>
// void op<T>::disp(){
//     cout<<add()<<endl;
//     cout<<sub()<<endl;
//     cout<<mul()<<endl;
//     cout<<div()<<endl;
// }
// int main(){
//     op<int>o1;
//     op<double>o2;
//     int i1,i2;
//     double d1,d2;
//     cin>>i1>>i2;
//     cin>>d1>>d2;
//     o1.get_data(i1,i2);
//     o2.get_data(d1,d2);
//     o1.disp();
//     o2.disp();
// }
// #include<iostream>
// using namespace std;
// template<class T>
// void Swap(T n1,T n2){
//     T temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
//     cout<<n1<<" "<<n2<<endl;
// }
// int main(){
//     Swap(2,3);
//     Swap(2.2,3.3);
//     Swap('s','z');
// }
#include<iostream>
using namespace std;
class t{
    int h,m;
    public:
    t(){
        h=0;
        m=0;
    }
    void get(int hou,int min){
        h = hou;
        m = min;
    }
    void disp(){
        cout<<h<<" "<<m;
    }
    t operator++(){
        t temp;
        if(m<59){
            h++;
            m++;
        }else if(m==59){
            m = 0;
            h++;
        }
        temp.h = h;
        temp.m = m;
        return temp;
    }
};
int main(){
    t obj;
    int hours,min;
    cin>>hours>>min;
    obj.get(hours,min);
    t obj1 = ++obj;
    obj1.disp();

}