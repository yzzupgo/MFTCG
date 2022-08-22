#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
#define PB push_back
#define pb pop_back
const unsigned int M = 1000000007;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int x,y; cin>>x>>y;
if(y >= 2 * x and y <= 4 * x)cout<<"Yes";
else cout<<"No";
return 0;
}
