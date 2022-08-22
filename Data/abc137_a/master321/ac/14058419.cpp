#include <bits/stdc++.h>
using namespace std;
#define l long
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int a,b;
cin >> a >> b;
cout << max({a + b, a - b, a * b}) << endl;
}
