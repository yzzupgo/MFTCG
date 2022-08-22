#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
cin>>n>>m;
if (n>12) cout<<m<<endl;
if (n<=12&&n>=6) cout<<m/2<<endl;
if (n<6) cout<<0<<endl;
return 0;
}
