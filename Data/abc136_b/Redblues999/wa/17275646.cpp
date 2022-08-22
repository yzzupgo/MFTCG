#include <iostream>
using namespace std;
int main() {
int n; cin >> n;
int count;
for (int i=1;i<=n;i++) {
string tmp = to_string(i);
if (tmp.size() % 2 == 1) count++;
}
cout << count << endl;
}
