#include<bits/stdc++.h>
#define MAXN 100000
using namespace std;
typedef long long ll;
int main()
{
int a,b;
cin>>a>>b;
if (a>=6&&a<=12) {
cout<<b/2; return 0;
}
if (a<=5) {
cout<<0; return 0;
}
cout<<b;
}
