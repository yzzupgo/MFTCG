#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define f(n) for(int i = 0; i < n; i++)
#define f2(n) for(int i = 1; i <= n; i++)
#define debug(x) if(on)cout << x << endl
#define on true
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back


int main(){

	vector<int> v;

	int aux;
	f(5){
		cin >> aux;
		v.pb(aux);
	}


	int total = 0;
	int dif = 0;
	for(auto x : v){
		if(x % 10 != 0){
			if(10 - (x%10) > dif)
				dif = 10 - (x % 10);
			total += 10 + (x - (x%10));
		}else{
	
			
			total += x;
		}
	}

	total -= dif;

	cout << total << endl;

return 0;

}
