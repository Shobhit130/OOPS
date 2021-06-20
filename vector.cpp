#include<iostream>
using namespace std;
class vector
{
	int num;
	int ele[20];
	public:
	friend istream& operator>>(istream&,vector&);
	friend ostream& operator<<(ostream&,vector&);
	vector operator+(vector&);
	vector operator-(vector&);
	int operator[](int);
};
int vector::operator[](int e){
    return ele[e];
}
istream& operator >>(istream& input, vector &obj){
    input>>obj.num;
    for(int i=0;i<obj.num;i++){
        input>>obj.ele[i];
    }
    return input;
}
ostream& operator <<(ostream& output, vector &obj){
    for(int i=0;i<obj.num;i++){
        output<<obj.ele[i]<<endl;
    }
    return output;
}
vector vector::operator+(vector& obj){
    vector v;
    v = obj;
    for(int i=0;i<num;i++){
        v.ele[i] = ele[i] + obj.ele[i];
    }
    return v;
}
vector vector::operator-(vector& obj){
    vector v;
    v = obj;
    for(int i=0;i<num;i++){
        v.ele[i] = ele[i] - obj.ele[i];
    }
    return v;   
}
int main()
{
	vector v1,v2,v3;
	// int i,j;
	cin>>v1;
	cin>>v2;
	// cin>>i;
	// cin>>j;
	// cout<<v1[i]<<endl;
	// cout<<v2[j]<<endl;
	v3 = v1+v2;
	cout<<v3;
	v3 = v1 - v2;
	cout<<v3;
}