#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define f first
#define s second
#define all(container) container.begin(),container.end()
#define fast ios::sync_with_stdio(0); cin.tie(0)
#define print(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void __f(const char* name, Arg1&& arg1){
cout << name << ": " << arg1 << '\n';
}
template <typename Arg1, typename... Args> void __f(const char* names, Arg1&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
int32_t main(){
fast;
int n; cin >> n;
int len = to_string(n).size();
int ans = 0;
int i;
for(i=1;i<=len-1;i+=2){
ans=ans+(9*pow(10,i));
}
int k = n-pow(10,i-1);
if(k>0){
ans=ans+k+1;
}
cout << ans << '\n';
return 0;
}
