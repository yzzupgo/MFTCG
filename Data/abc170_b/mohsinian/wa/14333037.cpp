#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int x,y;
cin>>x>>y;
if(y%2==0)
{
if(y/2==x){
cout<<"Yes"<<"\n";
return 0;
}
}
if(y%4==0)
{
if(y/4==x){
cout<<"Yes"<<"\n";
return 0;
}
}
int c_leg=y-4;
int t_leg=y-2;
if(((c_leg/2)+1==x && c_leg%2==0) || ((t_leg/4)+1==x && t_leg%4==0))
printf("Yes\n");
else
cout<<"No"<<"\n";
}
