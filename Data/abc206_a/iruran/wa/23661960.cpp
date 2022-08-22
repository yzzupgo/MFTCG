#include <bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
if((int)(a * 1.08) < 206) {
cout << "Yai!";
} else if((int)(a * 1.08) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
