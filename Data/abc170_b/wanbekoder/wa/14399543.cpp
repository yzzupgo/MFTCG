#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2==0 && (y/2>=x) && (x!=0 && y>0))
cout<<"Yes";
else
cout<<"No";
}
