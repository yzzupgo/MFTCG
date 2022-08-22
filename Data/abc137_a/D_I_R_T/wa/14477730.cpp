#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
long long a,b,c,d,e,f;
cin >> a >> b;
c=a+b, d=a-b, e=a*e;
if (c>d){
f=c;
}
else {
f=d;
}
if (f>e){
cout << f;
}
else {
cout << e;
}
}
