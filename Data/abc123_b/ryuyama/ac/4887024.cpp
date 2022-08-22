#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> a(5);
  	int minimam = 10;
    int sums = 0;
    for (int i=0;i<5;i++){
      cin>>a[i];
      if (a[i]%10 > 0){
        minimam = min(minimam,a[i]%10);
      }
      sums += 10 * ceil(float(a[i])/10.0);
    }
    sums = sums - 10 + minimam;
    cout << sums << endl;
	return 0;	
}