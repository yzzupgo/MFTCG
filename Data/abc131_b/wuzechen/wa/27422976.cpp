#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
cin>>a>>b;
int s=(b+b+a-1)*a/2;
if(b>0) cout<<s-b;
else if(b+b-1<0) cout<<s-(b+a-1);
else cout<<s;
return 0;
}
