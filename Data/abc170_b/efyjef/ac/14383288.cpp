#include <iostream>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<=n;i++){
if(m-2*i<0)break;
if((m-2*i)%4==0&&(m-2*i)/4==(n-i)){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
