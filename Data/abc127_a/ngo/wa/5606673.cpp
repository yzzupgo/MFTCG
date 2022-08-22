#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MIN(a,b) ((a) <= (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main(){
int a,b,ans;
cin >> a >> b;
if(a>13){
ans = b;
}
else ans = b/2;
cout << ans << endl;
}
