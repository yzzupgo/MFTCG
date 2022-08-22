#include <iostream>
#include <vector>
using namespace std;

int main(){
  	vector<int> a(5);
  	for(int i=0; i<5; i++){
    	cin >> a[i];
    }
  	int ans = 10000;
  	for(int i=0; i<5; i++){
    	int tmp = 0;
		for(int j=0; j<5; j++){
        	if(i==j) tmp += a[j];
          	else tmp += (a[j] % 10 == 0) ? a[j] : ((a[j] / 10)*10 + 10);
        }
      	ans = tmp <= ans ? tmp : ans;
    }
  	cout << ans << endl;
	return 0;
}