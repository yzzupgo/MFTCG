#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
for(int c=0;c<=X;c++){
int t=X-c;
int foot=c*2+t*4;
if(foot==Y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
