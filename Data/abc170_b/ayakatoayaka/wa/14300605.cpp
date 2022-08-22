#define rep(i,n) for (int i=0;i<n;i++)
#include <bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
int X,Y;
cin >> X >> Y;
if((Y-2*X)%2==0 && (Y-2*X)/2<=X)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
