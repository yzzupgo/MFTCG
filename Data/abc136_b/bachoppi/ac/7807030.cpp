#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(int)(n); i++)
typedef long long ll;
int main()
{
int N, dig=0;
cin >> N;
int a = N;
while(a>0){
a /= 10;
dig ++;
}
int ans;
if(dig == 2)
ans = 9;
else if(dig == 4)
ans = 909;
else if(dig == 1)
ans = N;
else if(dig == 3)
ans = N - 90;
else if(dig == 5)
ans = N - 9090;
else ans = 90909;
cout << ans << endl;
}
