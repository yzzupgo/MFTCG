#include <iostream>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<=n;i++){
if((m-2*i)%4==0){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
