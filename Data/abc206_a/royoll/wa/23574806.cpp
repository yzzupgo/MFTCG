#include<bits/stdc++.h>
using namespace std;
int main() {
double n, ans = 0;
cin >> n;
ans = n * 1.08;
if(ans > 206) {
cout << ":(" << endl;
} else if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
