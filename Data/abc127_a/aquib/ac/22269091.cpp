#include<iostream>
using namespace std;
int main(){
int age;
int cost;
cin>>age>>cost;
if(age<=5){
cout<<0;
}
if(age>=13){
cout<<cost;
}
if(age>=6 && age<=12){
cout<<cost/2;
}
}
