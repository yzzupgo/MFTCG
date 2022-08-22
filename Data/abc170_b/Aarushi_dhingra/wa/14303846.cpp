#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
int min=x*2;
int max=x*4;
if(y>=min || y<=max)
{
if(y%4==0 || y%2==0)
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
}
