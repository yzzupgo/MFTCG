#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int apple[200];
bool flag[200];
long s=0;
for(int i=0;i<n;i++)
{
apple[i] = l + i;
s += apple[i];
}
int a = 1000;
for(int i=0;i<n;i++)
{
if(abs(a)>abs(apple[i]))a = apple[i];
apple[i] = abs(apple[i]);
}
cout<<s-a;
}
