#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int a;
cin >> a;
if((int)(a * 1.08) < 206) {
cout << "Yay!" << endl;
} else if((int)(a * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
