#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> time(5);
  	vector<int> time1(5);
  	int divideNum = 9;
  	int ans = 0;
  	int index;
  	// »Î¡¶
	for (int i=0; i<5; i++) {
	  	cin >> time.at(i);
      	time1.at(i) = time.at(i)%10;
    }
  	// ”‡§Í§ÚÅK§Ÿ§Î
  	for (int i=0; i<5; i++) {
      	if(time1.at(i) != 0 && divideNum > time1.at(1)) {
          	index = i;
          	divideNum = time1.at(i);
        }
    }
  	for (int i=0; i<5; i++) {
      	int j;
      	if(i!=index) {
          	if(time1.at(i) == 0) {
				ans += time.at(i);
            } else {
              	j = time.at(i)-time1.at(i) + 10;
          		ans += j;
            }
        } else {
      	ans += time.at(i);
        }
    }
  	cout << ans << endl;
}