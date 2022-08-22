#include<bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define double long double
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define pi pair<int , int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(arr) arr.begin() , arr.end()
#define ip(arr,n) for(int i = 0; i < n; i++) cin >> arr[i]
#define op(arr,n) for(int i = 0; i < n; i++) cout << arr[i] << ' '; cout << endl;
#define ipp(arr,n) for(int i = 0; i < n; i++) cin >> arr[i].ff >> arr[i].ss
#define opp(arr,n) for(int i = 0; i < n; i++) cout << '(' << arr[i].ff << ',' << arr[i].ss << ')' << ' '; cout << endl;
#define ip2d(arr,m,n) for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) cin >> arr[i][j];
#define op2d(arr,m,n) for(int i = 0; i < m; i++) {for(int j = 0; j < n; j++) cout << arr[i][j] << ' '; cout << endl;}
const double PI = 3.141592653589;
const int MOD = 1e9+7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test_cases = 1;
while(test_cases--)
{
int n , l;
cin >> n >> l;
bool ans = false;
for(int i = 0; i <= n; i++){
for(int j = 0; j <= n-i; j++){
if((i*2)+(j*4) == l){
ans = true;
break;
}
}
if(ans) break;
}
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
}
return 0;
}
