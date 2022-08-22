#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
if(n>=1&&n<=9) cout << n << endl;
else if(n>=10&&n<=99) cout << 9 << endl;
else if(n>=100&&n<=999) cout << 9+n-99 << endl;
else if(n>=1000&&n<=9999) cout << 9+999-99<<endl;
else if(n>=10000&&n<=99999) cout << 9+999+n-9999<< endl;
else if(n==100000) cout << 9 + 999 + 99999 - 99 - 9999 << endl;
}
