#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<set>
#include<queue>
using namespace std;
int num, ans=0;
int main() {
cin >> num;
for (int i = 0;i < num;i++) {
int k = log10(i) + 1;
if (k % 2 != 0)ans++;
}
cout << ans<<endl;
}
