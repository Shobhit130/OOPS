#include<iostream>
using namespace std;
class vending{
    public:
    int code;
    int cost;
    int stock;
    void get_data(){
        cin>>code;
        cin>>cost;
        cin>>stock;
    }
};
int main(){
    int n,index=0;
    int user_code;
    int user_amount;
    cin>>n;
    vending v[n];
    for(int i=0;i<n;i++){
        v[i].get_data();
    }
    cin>>user_code>>user_amount;
    for(int i=0;i<n;i++){
        try{
        if(v[i].code==user_code && v[i].cost<=user_amount){
            index=i;
            cout<<v[i].code<<endl;
            break;
        }
        else{
            throw 0;
        }
    }
    catch(int i){
        cout<<"Wrong item code"<<endl;
        break;
    }
    }
    try{
    if(v[index].cost>user_amount){
            throw 1.1;
        }
    if(v[index].stock==0){
            throw "Less stock";
            
        }
    }
    catch(double i){
        cout<<"Insufficient amount"<<endl;
    }
    catch(char const msg[]){
        cout<<msg<<endl;
    }
}