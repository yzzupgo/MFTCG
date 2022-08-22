#include <bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long ll;
int main(){
int n, m;
scanf("%d%d", &n, &m);
printf("%d\n", max({n-m, n+m, n*m}));
return 0;
}
