#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //cretaing an integer type object vec1 of vector class
    //zero length vector
    vector<int> vec1;
    //creating a character type vector vec2 of length 4
    vector<char> vec2(4);
    //creating char vec3 from vec2 of same length
    vector<char> vec3(vec2);
    //creating vec4 of 6 elements of 3s
    vector<int> vec4(6,3);
    display(vec4);
    int ele;
    for(int i=0;i<4;i++){
        cout<<"Enter an element"<<endl;
        cin>>ele;
        vec1.push_back(ele);
    }

    //popback removes the last element from vector
    vec1.pop_back();
    //pointing the iter variable at the beginning of vector vec1
    vector<int>::iterator iter = vec1.begin();
    //inserting 566 at the beginning
    // vec1.insert(iter,566);
    //if we want to insert 566 after 1 then
    //iter is pointing at 2 but it will insert at the previous position
    // vec1.insert(iter+1,566);
    //inserting 5 copies of 26
    vec1.insert(iter+1,5,26);
    display(vec1);
}