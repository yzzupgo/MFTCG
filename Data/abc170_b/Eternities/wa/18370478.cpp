#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main(){
int x,y;
cin>>x>>y;
if((y-2*x)%2==1)puts("No");
else if((y-2*x)/2>x)puts("No");
else puts("Yes");
return 0;
}
