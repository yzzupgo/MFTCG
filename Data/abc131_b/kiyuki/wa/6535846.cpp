#include <bits/stdc++.h>
#define rep(i,n) for(int (i) = 0; (i) < (n); (i)++)
using namespace std;
int main(void){
int n, l;
int ii;
int sum = 0;
cin >> n >> l;
rep(ii, n){
sum += (l + ii);
}
if(l >= 1){
sum -= l;
}else if((l + n) < 0){
sum -= (l + n - 1);
}
cout << sum << endl;
return 0;
}
