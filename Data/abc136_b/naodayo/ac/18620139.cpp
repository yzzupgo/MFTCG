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
for (int i = 1;i <= num;i++) {
string k = to_string(i);
if (k.length() % 2 != 0)ans++;
}
cout << ans<<endl;
}
