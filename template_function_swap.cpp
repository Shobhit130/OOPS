#include<iostream>
using namespace std;
template <class t>
void Swap(t &n1,t &n2){
    t temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main(){
    int i1=2,i2=3;
    double d1=2.3,d2=3.4;
    char c1='z',c2='Z';
    Swap(i1,i2);
    cout<<i1<<" "<<i2<<endl;
    Swap(d1,d2);
    cout<<d1<<" "<<d2<<endl;
    Swap(c1,c2);
    cout<<c1<<" "<<c2<<endl;
}