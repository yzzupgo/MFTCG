#include<iostream>
using namespace std;
int main(){
int A,B;
cin>>A>>B;
if(A>=0&&A<=100&&B>=2&&B<=100){
if(A>=13)cout<<B;
else if(A>=6&&A<=12)cout<<B/2;
else if(A<=5)cout<<0;
}
return 0;}
