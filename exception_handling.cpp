#include<iostream>
using namespace std;
double div(double a, double b){
   try{
      if(b==0){
         throw "Division by 0";
      }else if(b==double(b)){
         throw 1.1;
      }
      else {
         return a/b;
      }
   }
   catch(const char msg[]){
      cout<<msg<<endl;
   }
   catch(double d){
      cout<<"Division by float"<<endl;
   }
   return 0;
}
int main(){
   double n1,n2;
   cin>>n1>>n2;
   cout<<div(n1,n2)<<endl;
   return 0;
}