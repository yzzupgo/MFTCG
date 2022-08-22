#include<iostream>
#include<stdio.h>
#include<cmath>
#include<math.h>
#include <iomanip>
#include<algorithm>
#include<vector>
#include <map>
#define rep(i,N) for(int (i)=0;(i) < (N); ++(i))
typedef long long ll;
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, l;
cin >> n >> l;
int res = n * (l - 1) + (n * (n + 1) / 2);
if(l > 0){
res -= l;
}else if((l < 0)&&((l + n) < 0)){
res -= l + n - 1;
}
cout << res << "\n";
return 0;
}
