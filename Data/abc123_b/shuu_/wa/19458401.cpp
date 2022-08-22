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
//#include <bits/stdc++.h>
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
	pair<int,int>s[5];
    for(int i= 0; i < 5;++i){
      int val;
	  cin >> val;
	  int x = val % 10;
	  if(x != 0)
	  s[i] = {x,val};
	  else 
      s[i] = {10,val};
	}
	sort(s,s+5);
/*	for(auto x : s){
		cout << x.first << " - " << x.second << endl;
	}*/
	int total = 0; 
    for(int i = 1; i < 5;++i){
		if(s[i].second % 10 != 0)

		total += s[i].second + (10 - (s[i].second%10));
		else
	    total+= s[i].second;
	//	cout << "tt: " << total << endl;
	}
		cout <<"total: " << total + s[0].second << endl;
	return 0;
}

