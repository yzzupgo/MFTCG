#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int a,b;
int main(){
cin>>a>>b;
cout<<max({a+b,a-b,a*b});
}
