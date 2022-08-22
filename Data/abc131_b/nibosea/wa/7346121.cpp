#include <bits/stdc++.h>
using namespace std;
int main(){
int n,L;
cin >> n >> L;
int ans = 0;
int aj;
aj=n*L+n*(n+1)/2-n;
if(L<0&&L+n-1<0){
ans = aj-(L+n-1);
}
else if(L<=0&&L+n-1>0){
ans=aj;
}
else if(L>0){
ans = aj - L;
}
cout << ans <<endl;
}
