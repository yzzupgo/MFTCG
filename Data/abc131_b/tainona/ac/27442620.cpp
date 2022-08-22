#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
int N,L;
cin >> N >> L;
vector<pair<int,int>> p;
int sam = 0;
rep(i,N){
p.push_back(make_pair(i+1,L+i));
sam += p[i].second;
}
int co=0;
int ans = INT_MAX;
int final = 0;
int ab;
rep(i,N){
rep(j,N){
if(i!=j){
co += (p[j].second);
}else{
continue;
}
}
ab = abs(sam-co);
ans = min(ans,ab);
if(ans==ab){
final = co;
}
co = 0;
}
cout << final <<endl;
return 0;
}
