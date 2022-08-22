#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#define INF 1e16
#define rep(i,n) for(int i=0;i<n;i++)
#define NO cout<<"NO"<<endl;
#define YES cout << "YES"<<endl;
#define No cout << "No"<<endl;
#define Yes cout << "Yes"<<endl;
#define all(a) a.begin(),a.end()
#define P pair<int,int>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
const ll maxn=100000;
int main(){
int a[maxn]={0};
int l;
int n;
cin >> n>>l;
rep(i,n){
a[i]=i+l;
}
sort(a,a+n);
int ans = 0;
for(int i=1;i<n;i++){
ans+=a[i];
}
cout << ans <<endl;
return 0;
}
