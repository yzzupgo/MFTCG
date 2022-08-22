#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
template <typename T>
void get_vector(T &a) {
for(auto &e : a) {
cin >> e;
}
}
template <typename T>
void put_vector(T a) {
for(auto e : a) {
cout << e << " ";
}
cout << endl;
}
int main() {
ll n;
n = (1.08 * n);
if(n < 206) {
cout << "Yay!" << endl;
} else if(n > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
