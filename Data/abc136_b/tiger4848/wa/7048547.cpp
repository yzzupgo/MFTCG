#include <bits/stdc++.h>
using namespace std;
int main() {
int n,b,a;
cin >> n;
a=0;
for(int i=0;i<n;i++){
a++;
if(0<a&&a<10)
b++;
if(99<a&&a<1000)
b++;
if(a==10000)
b++;
}
cout << b << endl;
}
