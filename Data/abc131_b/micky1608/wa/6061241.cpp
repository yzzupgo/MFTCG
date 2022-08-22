#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(int argc , char *argv[]) {
int n,l;
cin >> n >> l;
int res=0;
if(l>=0) {
for(int i = 2 ; i <= n ; i++) {
res += (l+i)-1;
}
}
else {
if(n<abs(l)) {
for(int i = 1 ; i < n ; i++) {
res += (l+i)-1;
}
}
else {
for(int i = 1 ; i <= n ; i++) {
res += (l+i)-1;
}
}
}
cout << res << endl;
return 0;
}
