#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<utility>
#include<vector>
#include<algorithm>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
using ll = long long;
using namespace std;
int main(){
int n,l;cin>>n>>l;
int left=l,right=l+n-1;
int eat;
if(left>=0)eat=left;
else if(right<=0)eat=right;
else eat=0;
int ans=abs((right-left+1)*(right+left)/2-eat);
cout<<ans<<endl;
return 0;
}
