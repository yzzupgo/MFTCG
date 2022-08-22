#include <bits/stdc++.h>
using namespace std;
int main() {
int n,b,a;
cin >> n;
a=0;
b=1;
for(int i=0;i<n;i++){
++b;
if(1>=b>=9 || 100>=b>=999 || b==10000)
a++;
}
cout << a << endl;
}
