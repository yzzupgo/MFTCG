#include<stdio.h>
#include <iomanip>
#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#include <random>
#include <chrono>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main() {
int n;
int ans=0,tmp=1,tmp2,p=100;
cin >> n;
rep(i, n + 1) {
if (i > 0 && i < 10)ans++;
if (i > 99 && i < 1000)ans++;
if (i > 9999 && i < 10000)ans++;
}
cout << ans;
}
