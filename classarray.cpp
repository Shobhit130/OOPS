#include<iostream>
using namespace std;
class student{
    char reg[10];
    char name[20];
    int marks[3];
    int avg;
    public:
    void read();
    void calc();
    void show();
};
void student::read(){
    cout<<"Enter the registration number"<<endl;
    cin>>reg;
    cout<<"Enter the name"<<endl;
    cin>>name;
    int i;
    for(i=0;i<3;i++){
        cout<<"Enter mark "<<i+1<<endl;
        cin>>marks[i];
    }
}
void student::calc(){
    int i;
    for(i=0;i<3;i++){
        avg+=marks[i];
    }
}
void student::show(){
    cout<<"Registration number is: "<<reg<<endl;
    cout<<"Name is: "<<name<<endl;
    int i;
    for(i=0;i<3;i++){
        cout<<"Mark "<<i+1<<" is: "<<marks[i]<<endl;
    }
    cout<<"Average is: "<<avg<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    student s[n];
    int i;
    for(i=0;i<n;i++){
    cout<<"Enter the details of student "<<i+1<<endl;
    s[i].read();
    }
    for(i=0;i<n;i++){
        s[i].calc();
    }
    for(i=0;i<n;i++){
        cout<<"The details of student "<<i+1<<" are:"<<endl;
        s[i].show();
    }
    return 0;
}
