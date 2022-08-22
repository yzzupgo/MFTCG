#include <bits/stdc++.h>
#define ref(i,n) for(int i=0;i<n;i++)
using namespace std;
int a,b,c,d,e;
int main()
{
bool j=0;
cin>>a>>b;
if(b%2) j=1;
if(2*a>b||4*a<b) j=1;
if(j==1) cout<<"NO";
else cout<<"YES";
return 0;
}
