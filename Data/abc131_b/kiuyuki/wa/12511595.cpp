#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int N,L;
cin >> N >> L;
int appleAll = 0;
rep(i,N){
appleAll += L + i;
}
int min_sub = appleAll;
int min = appleAll;
rep(i,N){
int tmp = 0;
int tmp_sub = 0;
rep(j,N){
if(i==j)continue;
tmp += L + j;
}
tmp_sub = abs(tmp - appleAll);
if(min_sub > tmp_sub){
min_sub = tmp_sub;
min = tmp;
}
}
cout << min << endl;
}
