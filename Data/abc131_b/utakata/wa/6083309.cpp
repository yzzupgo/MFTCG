#include<bits/stdc++.h>
using namespace std;
int main () {
int n,l,ideal,real;
cin>>n>>l;
ideal=n*l;
for (int i=0;i<n;i++) {
ideal=ideal+i;
}
if (l<=0) {
real=ideal;
}
else {
real=ideal-l;
}
cout <<real<<endl;
}
