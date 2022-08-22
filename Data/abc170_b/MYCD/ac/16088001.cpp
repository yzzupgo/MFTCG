#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
for(int i=0;i<=a;i++){
int cnt=0;
cnt+=4*i;
cnt+=2*(a-i);
if(cnt==b){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
