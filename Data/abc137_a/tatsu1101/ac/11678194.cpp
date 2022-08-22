#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,N) for(int i = 0;i < (int)(N);i++)
int main(){
int a,b;
cin>>a>>b;
int x=a+b,y=a-b,z=a*b;
int s=max(x,y);
int t=max(s,z);
cout<<t<<endl;
}
