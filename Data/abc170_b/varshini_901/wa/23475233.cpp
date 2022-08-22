#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x,y;
y=(b/2)-a;
x=2*a-(b/2);
if(abs(x)+abs(y)==a) cout<<"Yes";
else cout<<"No";
}
