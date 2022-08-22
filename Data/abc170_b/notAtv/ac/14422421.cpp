#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define OJ \
freopen("input.txt", "r", stdin); \
freopen("output.txt", "w", stdout);
const double PI = 3.1415926535897932238460;
int main(){
int k, a;
cin >> k>> a;
if (a>=k*2 && a<=k*4 && a%2==0)
cout << "Yes"<<endl;
else cout << "No"<<endl;
return 0;
}
