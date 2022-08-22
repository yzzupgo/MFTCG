#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int arr[5];
  // taking input
  for (int i = 0; i < 5; i++)
    cin >> arr[i];
// defining a vector
  vector<int> res;
  int summ = 0;
  for (int i = 0; i < 5; i++){
  	int temp = arr[i]%10;
    if(temp != 0) res.push_back(temp);
    summ += arr[i]/10;
  }
  (res.size()!=0)? cout << summ*10 + *min_element(res.begin(), res.end()) << '\n' : cout << summ*10 <<'\n';
	return 0;
}