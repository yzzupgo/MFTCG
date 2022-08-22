#define rep(i,n) for (int i=0;i<n;i++)
#include <bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
int X,Y,a,b;
cin >> X >> Y;
a=(Y-2*X)/2;
b=X-a;
if(a>=0 && b>=0 && Y%2==0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
