#include <bits/stdc++.h>
using namespace std;
template<typename T>
void debug(vector<T> item) {
for(auto &i : item) {
cout << i << " ";
}
cout << endl;
}
int main() {
int n;
cin >> n;
int res = floor(1.08 * n);
if(res < 206) {
cout << "Yay!" << '\n';
} else if(res > 206) {
cout << ":(" << '\n';
} else {
cout << "so-so" << '\n';
}
return 0;
}
