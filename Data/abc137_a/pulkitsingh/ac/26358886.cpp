#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int c=a+b;
int d=a-b;
int e=a*b;
int f;
int g;
f= max(c,d);
g= max(f,e);
cout<<g;
return 0;
}
