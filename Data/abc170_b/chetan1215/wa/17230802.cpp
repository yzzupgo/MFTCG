#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifdef _DEBUG
freopen("input.txt","r",stdin);
freopen("ouput.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int x,y;
cin>>x>>y;
int piv1,piv2;
piv1 = 4*x;
piv2 = 2*x;
if(y%2 != 0 || x==y) {
cout<<"NO"<<endl;
}else{
cout<<((y<=piv1 && y>=piv2)?"Yes":"No")<<endl;
}
return 0;
}
