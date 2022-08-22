#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 1; i < (int)n+1; i++)
int main(){
int n, L;
int sum,eat,ans;
cin >> n >> L;
sum=0;
rep(i,n){
sum+=(L+i-1);
}
rep(i,n){
if ((L+i-1) == 0) {
eat = 0;
break;
}
else {
if (sum > 0) {
eat = abs(L+1-1);
if (abs(L+i-1) < eat) {
eat = (abs(L+i-1));
continue;
}
else continue;
}
else if (sum == 0) {
if (abs(L+i-1) < eat) {
eat = (abs(L+i-1));
continue;
}
else continue;
}
else if (sum < 0) {
if (abs(L+i-1) > eat) {
eat = (L+i-1);
continue;
}
else continue;
}
}
}
ans = sum - eat;
cout << ans << endl;
return 0;
}
