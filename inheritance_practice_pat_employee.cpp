#include<iostream>
using namespace std;
class basicInfo{
    public:
    char name[20];
    int empid;
    char gender;
    void get_data(){
        cin.getline(name,20);
        cin>>empid;
        cin>>gender;
    }
};
class deptInfo{
    public:
    char deptname[20];
    char work[20];
    int t;
    void get_data(){
        fflush(stdin);
        cin.getline(deptname,20);
        fflush(stdin);
        cin.getline(work,20);
        cin>>t;
    }

};
class employee:public basicInfo,public deptInfo{
    public:
    void display(){
        cout<<"Basic information: "<<endl;
        cout<<name<<endl;
        cout<<empid<<endl;
        cout<<gender<<endl;
        cout<<"Department Information: "<<endl;
        cout<<deptname<<endl;
        cout<<work<<endl;
        cout<<t<<endl;
    }
};
int main(){
    employee e;
    e.basicInfo::get_data();
    e.deptInfo::get_data();
    e.display();
    return 0;
}