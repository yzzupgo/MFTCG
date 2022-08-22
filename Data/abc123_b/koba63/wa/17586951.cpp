#include <bits/stdc++.h>
using namespace std;

int main() {
  	vector<int> time(5);
  	int mod, ans, ans1;
  	ans1 = 0;
  	ans = pow(10,10);
  	for(int i=0; i<5; i++) {
      	cin >> time.at(i);
    }
  	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
          	if(i!=j) {
              	mod = time.at(j)%10;
              	if(mod==0) {
                  	ans1 += time.at(j);
                } else {
                  	ans1 += (time.at(j) - mod) + 10;
                }
            } else {
              	ans1 += time.at(i);
            }
        }
      	ans = min(ans, ans1);
    }
  	cout << ans << endl;
}