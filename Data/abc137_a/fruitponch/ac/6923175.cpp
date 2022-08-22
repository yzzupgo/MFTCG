#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
int a,b,c[2];
cin>>a>>b;
c[0]=a+b;
c[1]=a-b;
c[2]=a*b;
sort(c,c+3);
cout<<c[2];
}
