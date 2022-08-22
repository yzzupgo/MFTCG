#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ll n;
cin >> n;
n = n * 1.08;
if(n <= 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
