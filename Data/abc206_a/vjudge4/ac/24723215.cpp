#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int comp[N], arr2[N];
int main() {
int n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else if(n > 206) {
cout << ":(" << endl;
}
return 0;
}
