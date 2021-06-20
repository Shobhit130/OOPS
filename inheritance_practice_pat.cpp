#include<iostream>
using namespace std;
class stu{
    protected:
    char id[10];
    char name[20];
    public:
    void getstu();
};
void stu::getstu(){
    cout<<"Enter the id: ";
    cin>>id;
    cout<<"Enter the name: ";
    cin>>name;
}
class marks:public stu{
    public:
    int marks[3];
    void getmarks();
};
void marks::getmarks(){
    for(int i=0;i<3;i++){
        cout<<"Enter marks "<<i+1<<endl;
        cin>>marks[i];
    }
}
class sports{
    protected:
    int smarks;
    public:
    void getsports();
};
void sports::getsports(){
    cout<<"Enter sports marks "; 
    cin>>smarks;
}
class result:public marks,public sports{
    public:
    void show(){
        cout<<"Student id: "<<id<<endl;
        cout<<"Student name: "<<name<<endl;
        int tot=0,avg=0;
        for(int i=0;i<3;i++){
            tot+= marks[i];
        }
        avg = tot/3;
        cout<<"Total: "<<tot<<endl;
        cout<<"Average: "<<avg<<endl;
        cout<<"Average + Sports: "<<avg+smarks<<endl;
    }
};
int main(){
    result r;
    r.getstu();
    r.getmarks();
    r.getsports();
    r.show();
    return 0;
}