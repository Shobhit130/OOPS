//storing infromation of students
#include<iostream>
using namespace std;
class student{
    private:
        char name[20];
        char code[10];
        int marks;
        char grade;
    public:
        void get_data();
        void set_data();
        void show_data();
};
void student::get_data(){
    cin>>name;
    cin>>code;
    cin>>marks;
}
void student::set_data(){
    if(marks>90 && marks<=100){
        grade='S';
    }else if(marks>80 && marks<=90){
        grade='A';
    }else if(marks>70 && marks<=80){
        grade='B';
    }else if(marks>60 && marks<=70){
        grade='C';
    }else if(marks>50 && marks<=60){
        grade='D';
    }else{
        grade='F';
    }
}
void student::show_data(){
    cout<<code<<" "<<grade<<endl;
}
int main(){
    student s1,s2;
    s1.get_data();
    s1.set_data();
    s1.show_data();
    
    s2.get_data();
    s2.set_data();
    s2.show_data();
    return 0;
    
}