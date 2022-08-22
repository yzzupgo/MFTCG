#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include <cstring>
#include<math.h>
#include <queue>
#include <stack>
#include <cstdint>
#include <map>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
const int INF = 1 << 29;
const long long mod = 1e9 + 7;
vector<int> G[201010];
int Cnt[201010];
int CL[201010];
queue<int> OL;
int ret;
int BFS() {
int u, v, r = 0;
while(!OL.empty()) {
u = OL.front();
OL.pop();
CL[u] = 1;
for(int i = 0; i < G[u].size(); i++) {
v = G[u][i];
if(CL[v] == 0) {
OL.push(v);
Cnt[v] = Cnt[u] + 1;
ret = (ret >= Cnt[v]) ? ret : Cnt[v];
r = (ret >= Cnt[v]) ? r : v;
}
}
}
return r;
}
int main() {
double n, q;
int a, b;
cin >> n;
for(int i = 0; i < n; i++) {
}
if((int)(n * 1.08) < 206) {
printf("Yay!\n");
} else if((int)(n * 1.08) == 206) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
