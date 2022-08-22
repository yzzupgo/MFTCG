#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int main(){
int N,a=0,b,c,d,e,f,i;
cin >> N;
b=log10(N)+1;
if(b==6)cout <<90909;
if(b==5){
c=N-10000+1;
cout<< c+909;
}
if(b==4)cout<<909;
if(b==3){
c=N/100;
c=N-100+1;
cout<<c+9;
}
if(b==2)cout<<9;
if(b==1)cout<<N;
}
