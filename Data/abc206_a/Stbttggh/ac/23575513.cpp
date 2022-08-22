#include <bits/stdc++.h>
#define F first
#define S second
#define MAX 10000003
using namespace std;
#define ll long long int
#include<fstream>
#define fast ios_base::sync_with_stdio(false);
#define io cin.tie(NULL);
#define inp(arr,n) for(ll i=0;i<n;i++){cin>>arr[i];}
#define print(arr,n) for(ll i=0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define MOD 1000000007
int main() {
ll n;
cin >> n;
ll z = n * 1.0 * 1.08;
if(z < 206) {
cout << "Yay!" << endl;
} else if(z == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
