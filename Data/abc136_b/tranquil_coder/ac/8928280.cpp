#include <bits/stdc++.h>
using namespace std;
int power(int a,int b) {
long long int mul=1;
while(b>0) {mul*=a; b--;}
return mul;
}
int main() {
int n,a,d=0,sum=0; cin>>n;
a=n;
while(a>0) { a/=10; d++; }
if(d%2==0) d--;
else {
sum = n-(power(10,d-1))+1;
d-=2;
}
for(;d>0;d-=2) { sum+=power(10,d)-power(10,d-1);}
cout<<sum<<endl;
return 0;
}
