#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin >> n >> k;
string ans = "No";
for(int i=1; i<=n; i++){
int an = n-i;
if(2 * i + 4 * an == k){
ans = "Yes";
}
}
cout << ans;
}
