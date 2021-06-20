#include<iostream>
#include<string.h>
using namespace std;
#define size 20
template <class T>
class stack{
    T arr[size];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(T data);
    T pop();
    void disp();
};
template<class T>
void stack<T>::push(T data){
    top++;
    arr[top] = data;
}
template<class T>
T stack<T>::pop(){
    T data;
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }else{
    data = arr[top];
    top--;
    }
    return data;
}
template<class T>
void stack<T>::disp(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    stack<int>s1;
    stack<string>s2;
    s1.push(10);
    s1.push(20);
    s1.disp();
    cout<<"The popped element is: "<<s1.pop()<<endl;
    s1.disp();
    s2.push("World");
    s2.push("Hello");
    s2.disp();
    cout<<s2.pop()<<endl;
}