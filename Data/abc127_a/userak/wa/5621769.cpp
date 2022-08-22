#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,j,i=0,k=0;
cin >> n >> j;
int a[100010] = {};
while(i<n){
cin >> a[i];
i++;
}
sort(a,a+n);
vector<pair<int,int>> A(j);
while(i<j){
cin >> A[i].second >> A[i].first;
i++;
}
sort(A.begin(),A.end(),greater<pair<int,int>>());
i=0;
while(i<j)
{
int b = A[i].second;
while(b > 0){
if(a[k]<A[i].first){
a[k] = A[i].first;
k++;
b--;
if(k>=n){
goto out;
}
}else{
break;
}
}
i++;
}
out:
long long ans = 0;
i=0;
while (i<n){
ans += a[i];
i++;
}
cout << ans;
return 0;
}
