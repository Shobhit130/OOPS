// #include<iostream>
// using namespace std;
// template <class t>
// t large(t n1,t n2){
//     if(n1>n2)
//     return n1;
//     else
//     return n2;
// }
// int main(){
//     int i1,i2;
//     double d1,d2;
//     char c1,c2;
//     cin>>i1>>i2;
//     cout<<large(i1,i2);
//     cin>>d1>>d2;
//     cout<<large(d1,d2);
//     cin>>c1>>c2;
//     cout<<large(c1,c2);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// template<class T1, class T2>
// class test{
//     T1 data1;
//     T2 data2;
//     public:
//     test(T1 a, T2 b){
//         data1 = a;
//         data2 = b;
//     }
//     void disp(){
//         cout<<data1<<endl<<data2<<endl;
//     }
// };
// int main(){
//     test<int,char>t1(2,'c');
//     test<float,char>t2(2.2,'c');
//     t1.disp();
//     t2.disp();
    
// }
#include<iostream>
using namespace std;
template<class T, class U>
float fun(T n1, U n2){
    return n1*n2;
}
int main(){
  cout<<fun(2,2)<<endl;
  cout<<fun(2,3.3)<<endl;
  cout<<fun(3.3,4)<<endl;
  return 0;
}