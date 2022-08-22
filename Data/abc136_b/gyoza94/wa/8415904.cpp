#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
bool check(int x){
int plus = 0;
while(x){
plus++;
x /= 10;
}
return plus % 2 == 1;
}
int main()
{
int n;
cin >> n;
int ans = 0;
rep(i,n){
if(check(i)){
ans++;
}
}
cout << ans << endl;
}
