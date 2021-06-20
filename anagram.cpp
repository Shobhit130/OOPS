#include<iostream>
#include<string.h>
using namespace std;
class STRING{
    public:
    string s1,s2;
     void get_data(){
        cin>>s1;
        cin>>s2;
    }
};
class ANAGRAM:public STRING{
    public:
    int check_anagram(){
        int a1[26]={0}, a2[26]={0};
        if(s1.length()!=s2.length())
        return 0;
        for(int i=0; s1[i]!='\0'; i++){
            a1[s1[i]-'a']++;
        }
        for(int i=0; s2[i]!='\0'; i++){
            a2[s2[i]-'a']++;
        }      
        for(int i=0; i<26; i++){
            if(a1[i] != a2[i])
                return 0;
        }
        return 1;
    }
};
class COUNT:public STRING{
    public:
    void count(){ 
        int c = 0;
        int a=0,e=0,ci=0,o=0,u=0;
        string word = s1+s2;
        for(int i=0;i<word.length();i++){
            if(word[i]=='a' || word[i]=='A'){
                a++;
                c++;
            }else if(word[i]=='e' || word[i]=='E'){
                e++;
                c++;
            }else if(word[i]=='i' || word[i]=='I'){
                ci++;
                c++;
            }else if(word[i]=='o' || word[i]=='O'){
                o++;
                c++;
            }else if(word[i]=='u' || word[i]=='U'){
                u++;
                c++;
            }
        }
        cout<<c<<endl;
        if(a!=0){
            cout<<"a "<<a<<endl;
        }
        if(e!=0){
            cout<<"e "<<e<<endl;
        }
        if(ci!=0){
            cout<<"i "<<ci<<endl;
        }
        if(o!=0){
            cout<<"o "<<o<<endl;
        }
        if(u!=0){
            cout<<"u "<<u<<endl;
        }
    }
};
int main(){
    ANAGRAM a;
    a.get_data();
    if(a.check_anagram()){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    COUNT s;
    s.s1 = a.s1;
    s.s2 = a.s2;
    s.count();
}