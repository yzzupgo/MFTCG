#include<iostream>
#include<vector>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int t = y-2*x;
int c = 4*x-y;
if(t>=0 && c>=0 && (t%2==0) && (c%2==0))
cout<<"Yes";
else
cout<<"No";
return 0;
}
