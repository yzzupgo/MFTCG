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
if(d%2==0){ d--;
while(d>0) { sum+=9*power(10,d-1); d-=2;}
}
else {
sum = n%(power(10,d-1))+1;
d-=2;
while(d>0) { sum+=9*power(10,d-1); d-=2;}
}
cout<<sum<<endl;
return 0;
}
