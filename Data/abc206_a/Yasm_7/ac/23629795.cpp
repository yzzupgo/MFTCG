#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main() {
ll n, m, k, t, sum = 0;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
