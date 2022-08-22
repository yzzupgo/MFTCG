#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
ll mm=1000000000;ll MM=mm+7;
#define rep(i,n) for(int i=0;i<n;i++)
#define PI 3.141592653589793
int main(){
int x,y;
cin >> x >> y;
if(2*x<=y && 4*x>=y && y%2==0)cout << "Yes" << endl;
else cout << "No" << endl;
}
