#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FILE freopen("input.txt", "rt", stdin);freopen("output.txt", "wt", stdout);
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
const char nl = '\n';
int main(){
FAST_IO;
int n,m;
cin>>n>>m;
if(m%2 !=0 || m/4>n || 2*n>m){
cout<<"No"<<nl;
}else
cout<<"Yes"<<nl;
return 0;
}
