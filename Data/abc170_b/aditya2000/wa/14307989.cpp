#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y; cin>>x>>y;
int b = (y-2*x)/2;
int a = (y-4*b)/2;
int c = (y-2*x)/2;
if(a+b==x && a==c )cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
