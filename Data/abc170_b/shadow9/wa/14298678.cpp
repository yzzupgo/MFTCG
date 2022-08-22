#include <bits/stdc++.h>
#define debug(x) cout << #x << " -> " << x << endl
#define booga cout << "booga" << endl
#define ll long long int
using namespace std;
void testcase(){
int x,y;
cin >> x >> y;
if(y&1){
cout << "No \n";
return;
}
y /= 2;
if(y > 2*x){
cout << "No \n";
return;
}
cout << "Yes \n";
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
t = 1;
while(t--){
testcase();
}
return 0;
}
