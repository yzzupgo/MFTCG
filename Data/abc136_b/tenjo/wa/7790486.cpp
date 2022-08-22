#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
int a,s; cin>>a; s=0;
rep(i,a) {if(i<10) s++; else if(i>99 && i<1000) s++; else if(i>10000 && i<100000) s++;}
cout<<s<<endl;
}
