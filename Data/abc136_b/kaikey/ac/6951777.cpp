#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;
const int MOD = 1000000007;
int main(){
int N;
cin >> N;
int count = 0;
for(int i=N;i>=1;i--) {
if((int)(log(i)/log(10)+0.0000001)%2 == 0) count++;
}
cout << count;
}
