#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<n;i++)
int main(){
int a,s; cin>>a; s=0;
rep(i,a+1) {if(i<10) s++; else if(i>99 && i<1000) s++; else if(i>1000 && i<100000) s++;}
cout<<s<<endl;
}
