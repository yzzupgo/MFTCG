#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
fastIO
int n,x;
cin>>n>>x;
if(x%2==1){
cout<<"No"<<endl;
}
else{
if((x>=(n*2))||(x<=(n*4)))
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
return 0;
}
