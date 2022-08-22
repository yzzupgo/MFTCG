#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int n, l; scanf("%d %d",&n,&l);
printf("%d", n*(n+1)/2-1 +(l-1)*(n-1));
}
