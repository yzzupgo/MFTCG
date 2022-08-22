#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005
int N ;
int main(){
cin >> N ;
int cnt = 0 ;
for(int i = 1 ; i <= N ; i++){
if(i < 10 || (100 <= i && i < 1000) || (10000 <= i && i < 100000)) cnt++ ;
}
cout << cnt << endl ;
}
