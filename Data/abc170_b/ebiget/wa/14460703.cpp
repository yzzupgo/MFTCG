#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i <(n) ; ++i)
#define PI 3.14159265
#define pb push_back
#define pr pair<int,int>
using namespace std;
using ll = long long;
void self_max(int &a,int b){
a = max(a,b);
}
void self_min(int &a,int b){
a = min(a,b);
}
int main(){
int a,b; cin >> a >> b;
if((b- 2*a)%2 ==0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
