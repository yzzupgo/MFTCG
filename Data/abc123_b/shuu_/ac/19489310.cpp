/*==========================================================================

                              | |                    
                           ___| |__  _   _ _   _     
                          / __| '_ \| | | | | | |    
                          \__ \ | | | |_| | |_| |    
                          |___/_| |_|\__,_|\__,_|    


==========================================================================*/
#include <iostream>
#include <utility>
#include <algorithm>
#include <climits>//#include <bits/stdc++.h>
using namespace std;
/*
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    if(sz(name)){
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}
*/
int main(){
	ios_base::sync_with_stdio(false);	
	//setIO("");
	/*
	pair<int,int>s[5];
    for(int i= 0; i < 5;++i){
      int val;
	  cin >> val;
	  int x = val % 10;
	  s[i] = (x != 0) ? {x,val} : {10,val};
	}
	sort(s,s+5);
	int total = 0; 
    for(int i = 1; i < 5;++i){
		total += (s[i].second % 10 != 0)?s[i].second + (10 - (s[i].second%10)) : 
	    total+= s[i].second;
	}
		cout << total + s[0].second << endl;
		*/

	int a[5];
	int b[5]{0,1,2,3,4};
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	int fs = INT_MAX;
	do{
       int ans= 0;
       for(int i =0; i < 5;++i){
           while(ans % 10 != 0)++ans;
		   ans+=a[b[i]];
	   }
	   fs = min(fs,ans);
	}
	while(next_permutation(b,b+5));
	cout << fs;
	return 0;
}

