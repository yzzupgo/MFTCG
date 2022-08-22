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
bool a = false;
for(int i = 0; i <= x; i++){
for(int j = x; j >= 0; j--){
if(y == ((2 * i) + (4 * j))){
cout<<"Yes";
exit(0);
}
}
}
cout<<"No";
return 0;
}
