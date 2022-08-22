#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
n *= 108;
if(n < 20600) {
cout << "Yay!\n";
} else if(n == 20600) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
