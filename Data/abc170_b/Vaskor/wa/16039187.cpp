#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for(int i=0;i<=100;i++) {
int val=x-i;
if(i*2+val*4==y) {
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
