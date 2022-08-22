#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
bool yes=false;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(x!=0&&y==0)
break;
if((i*4+j*2)==y)
yes=true;
}
}
cout<<(yes?"Yes":"No")<<endl;
return 0;
}
