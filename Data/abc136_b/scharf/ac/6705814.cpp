#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
const long long mod = 1e9 + 7;
int main(){
int n, ans = 0;
cin >> n;
for(int i = 1; i<8; i += 2){
if(n >= pow(10, i)) ans += pow(10, i) - pow(10, i-1);
else if(n >= pow(10, i - 1)) ans += n - pow(10, i-1) + 1;
}
cout << ans << endl;
}
