#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;
int main(){
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);
ll x, y;
cin >> x >> y;
if((4*x < y) or (y%2 == 1)){
cout << "No" << endl;
}
else{
ll a = (y-2*x)/2;
ll b = (4*x-y)/2;
if((4*a + 2*b == y) and a >= 0 and b >= 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
return 0;
}
