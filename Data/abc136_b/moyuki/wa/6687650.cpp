#include <bits/stdc++.h>
#define r(i,n) for(int i = 0; i<n; i++)
using namespace std;
int main() {
int n,sum;
cin >> n;
if(1<=n&&n<10)sum = n;
else if(10<=n&&n<100) sum = 9;
else if(100<=n&&n<1000) sum = n-90;
else if(1000<=n&&n<10000) sum = 909;
else sum = 910;
cout << sum << endl;
}
