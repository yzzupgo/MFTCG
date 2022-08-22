#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<string>
#include<cmath>
#include<string.h>
#include<sstream>
#include<limits.h>
using namespace std;
int gcd(int a,int b){
return b ? gcd(b,a%b):a;
}
int lcm(int a,int b){
return a/gcd(a,b)*b;
}
int X,Y;
int main(){
cin>>X>>Y;
if((4*X-Y)%2==0 && 4*X-Y>=0 && X>=Y){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
