#include <bits/stdc++.h>
#define rep(i,n,a) for(int i = a; i < (int)(n); i++)
using namespace std;
typedef long long ll;
typedef unsigned long long u_ll;
typedef pair<int, int> pair_;
const int INF = 1001001001;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
int k;
int main(){
int n, l;
cin >> n >> l;
int sum=0;
int tabe=INF;
rep(i, n, 0) sum+=l+i;
int summ=abs(sum-(sum-l));
int ans=sum-l;
rep(i, n, 0){
if(summ>=abs(sum-(sum-l-i))) {
summ=abs(sum-(sum-l-i));
ans=sum-l-i;
}
}
cout << ans;
return 0;
}
