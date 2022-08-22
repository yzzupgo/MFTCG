#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(void){
int n, l;
int result = 0;
cin >> n >> l;
rep(i, n){
result += l+i;
}
if(l+n-1 <= 0){
result -= l+n-1;
} else if(l > 0){
result -= l;
}
cout << result << endl;
return 0;
}
