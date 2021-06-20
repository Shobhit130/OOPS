#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> marks;
    marks["Shobhit"] = 96;
    marks["Varun"] = 97;
    marks["Somit"] = 101;
    marks["Siddharth"] = 99;
    marks.insert({{"Angad",102},{"Eshaan",103}});
    map<string,int>:: iterator itr;
    for(itr=marks.begin();itr!=marks.end();itr++){
        //displaying key " " value
           cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
}