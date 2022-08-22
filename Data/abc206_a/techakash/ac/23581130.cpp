#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ll n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
