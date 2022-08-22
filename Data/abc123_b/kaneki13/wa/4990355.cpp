//----------ACCIDENTAL COMPETITIVE PROGRAMMER---------------------

#include<bits/stdc++.h>

/*
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
*/
using namespace std;

#define LL long long
#define LD long double
#define PB push_back
#define MP make_pair


const LL MOD = (1e9) + 7 ;
const LD EPS = 0.0000001 ;

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    for (int i = 0; i < 5; i++)
    	cin >> arr[i];
    vector<pair<int,int> > v;
    for (int i = 0; i < 5; i++){
    	v.PB(MP(arr[i] % 10, arr[i]));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans = 0;
    int tim = 0;
    for (int i = 0; i < 5; i++){
    	if (i == 4)
    		tim = tim + v[i].second;
    	else {
    		int x = v[i].second;
    		if (x % 10){
    			x = x / 10;
    			x++;
    		} else {
    			x = x / 10;
    		}
    		tim += x * 10;
    	}
    }
    cout << tim << endl;
	return 0;
}