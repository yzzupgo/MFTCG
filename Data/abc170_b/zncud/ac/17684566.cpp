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
int main()
{
int x, y;
int tmp;
int u, k;
cin >> x >> y;
tmp = y - x * 2;
if (tmp < 0) {
k = -tmp / 2;
u = max(x - k,0);
}
else {
u = tmp / 2;
k = max(x - u,0);
}
if (k * 2 + u * 4 == y) {
cout << "Yes";
}
else {
cout << "No";
}
}
