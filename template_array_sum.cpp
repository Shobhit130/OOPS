#include<iostream>
using namespace std;
template<class T>
T fun(T arr[],int n){
    T s;
    for(int i=0;i<n;i++){
        s += arr[i];
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    double arr1[n];
    cout<<"Enter integer values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fun(arr,n)<<endl;
    cout<<"Enter float values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<fun(arr1,n)<<endl;
}