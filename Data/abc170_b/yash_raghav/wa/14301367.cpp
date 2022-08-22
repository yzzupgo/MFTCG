#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i,s,n) for (int i = s; i < n; i++)
#define pb push_back
#define umap unordered_map
#define minHeap(t) priority_queue<t, vector<t>, greater<t>>
#define maxHeap(t) priority_queue<t>
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t = 1;
while(t--){
int x,y;
cin>>x>>y;
if(y&1==1){
cout<<"No"<<endl;
}
else{
if((y-(2*x))%2!=0){
cout<<"No"<<endl;
}
else{
cout<<"Yes"<<endl;
}
}
}
return 0;
}
