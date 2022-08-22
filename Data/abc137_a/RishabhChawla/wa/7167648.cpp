#include <bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main() {
boost
int a;
int b;
cin>>a>>b;
int p,q,r;
p=a+b;
q=a-b;
r=a*b;
int max=-100;
if(p>max)
max=p;
else if(q>max)
max=q;
else if (r>max)
max=r;
cout<<max;
return 0;
}
