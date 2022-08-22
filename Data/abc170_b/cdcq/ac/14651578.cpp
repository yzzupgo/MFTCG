#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<(b%2==0 && b>=a*2 && b<=a*4 ? "Yes" : "No")<<endl;
return 0;
}
