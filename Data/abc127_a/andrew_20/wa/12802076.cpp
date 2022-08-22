#include<iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(b%2==0 &&b <=13)
cout<<b;
else if (b%2==0 &&(b<=6 ||b>=12 ))
cout<<(b/2);
else if(b%2==0 && b<6)
cout<<'0';
}
