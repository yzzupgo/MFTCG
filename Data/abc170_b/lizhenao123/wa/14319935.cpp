#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0;i<=x&&x*4<=y;i++){
if(i*4+(x-i)*2==y)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
