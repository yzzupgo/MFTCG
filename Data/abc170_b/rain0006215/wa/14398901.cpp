#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define GET_ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))
#define LL long long
int main(){
LL x,y;
bool true_flg = false;
cin >> x >> y;
for(int i = 0; i < x; i++) {
if(y == (i*4) + ((x-i)*2)){
true_flg = true;
}
}
if(true_flg) {
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
