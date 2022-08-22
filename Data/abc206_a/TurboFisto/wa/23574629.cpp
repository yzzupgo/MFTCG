#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long double n, i, j;
i = 206.00;
cin >> n;
j = n * 1.08;
if(n < 191) {
cout << ":(" << endl;
} else if(n > 191) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
