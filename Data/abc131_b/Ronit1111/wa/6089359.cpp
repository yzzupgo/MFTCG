#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int sum = (n*(2*l+(n-1)))/2;
int m = INT_MIN;
for(int i=1;i<=n;i++)
m = max(m,sum-(l+i-1));
cout<<m;
return 0;
}
