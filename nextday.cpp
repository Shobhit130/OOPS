#include<iostream>
using namespace std;
class date{
    int d;
    int m;
    int y;
    public:
    friend istream& operator >>(istream& input, date &obj);
    friend ostream& operator <<(ostream& output, date &obj);
    date operator ++(){
        date temp;
        temp.d = d;
        temp.m = m;
        temp.y = y;
        if(d==28 && m==2 && ((y%400==0)||(y%4==0 && y%100!=0))){
           temp.d = ++d;
        }else if(d==28 && m==2){
            temp.d = 1;
            temp.m = ++m;
        }else if(d==29 && m==2){
            temp.d = 1;
            temp.m = ++m;
        }else if(d==30 &(m==4||m==6||m==9||m==1)){
            temp.d = 1;
            temp.m = ++m;
        }else if(d==31 && m==12){
            temp.d = 1;
            temp.m = 1;
            temp.y = ++y;
        }else if(d==31 &&(m==1||m==5||m==7||m==8||m==10)){
            temp.d = 1;
            temp.m = ++m;
        }else{
           temp.d = ++d;
        }
        return temp;
    }
};
istream& operator >>(istream& input, date &obj){
    input>>obj.d>>obj.m>>obj.y;
    return input;
}
ostream& operator <<(ostream& output, date &obj){
    output<<obj.d<<" "<<obj.m<<" "<<obj.y;
    return output;
}
int main(){
    date d1,res;
    cout<<"Enter the date"<<endl;
    cin>>d1;
    res = ++d1;
    cout<<d1<<endl;
    cout<<res;
    return 0;
}