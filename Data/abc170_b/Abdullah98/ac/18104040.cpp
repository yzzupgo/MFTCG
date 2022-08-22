#include <iostream>
using namespace std;
int main(){
int x=0,y=0;
cin>>x>>y;
bool f=0;
for(int i=0;i<=x;i++)f|=( ( (i*2)+ ((x-i)*4) ) == y);
if(f)cout<<"Yes";
else cout<<"No";
return 0;
}
