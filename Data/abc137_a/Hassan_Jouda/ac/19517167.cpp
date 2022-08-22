#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b; cin>>a>>b;
int v = a+b;
int r = a-b;
int x = a*b;
cout<<max(x,max(v,r));
}
