#include<iostream>
using namespace std;
int A;
int B;
int ans;
int main(){
cin >> A;
cin >> B;
if(A>=13){
ans=B;
}
if(A<=12){
if(A!=0){
ans=B/2;
}
}
if(A == 0)
{
ans=0;
}
}
