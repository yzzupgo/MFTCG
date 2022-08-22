#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
for(int i=0;i<=X;i++){
int t=X-i;
int foot=2*1+4*t;
if(foot==Y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
