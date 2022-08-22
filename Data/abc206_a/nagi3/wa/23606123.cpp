#include <iostream>
#include <vector>
#define _GLIBCXX_DEBUG
using namespace std;
int main() {
int n;
int count = 0;
cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) {
cin >> a[i];
}
for(int i = 0; i < n; i++) {
for(int j = i + 1; j < n; j++) {
if(a[i] != a[j]) {
count++;
}
}
}
cout << count << endl;
}
