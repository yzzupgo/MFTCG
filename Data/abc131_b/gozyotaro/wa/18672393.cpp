#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005
int N , L ;
int main(){
cin >> N >> L ;
ll con = 10000000000 ;
int hiku ;
int sum = 0 ;
for(int i = 0 ; i < N ; i++){
sum += L + i ;
if( abs(L + i) < con ){
con = abs(L + i) ;
hiku = L + i ;
}
}
if(sum)
cout << sum - hiku << endl ;
}
