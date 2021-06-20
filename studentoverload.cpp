#include<iostream>
using namespace std;
class student{
    char reg[10];
    char name[20];
    int marks[3];
    int avg;
    public:
    friend istream& operator >>(istream& input, student &obj);
    friend ostream& operator <<(ostream& output, student &obj);
};
istream& operator >>(istream& input, student &obj){
    input>>obj.reg>>obj.name;
    for(int i=0;i<3;i++){
        input>>obj.marks[i];
    }
    return input;
}
ostream& operator <<(ostream& output, student &obj){
    output<<obj.reg<<" "<<obj.name;
    return output;
}
int main(){
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
