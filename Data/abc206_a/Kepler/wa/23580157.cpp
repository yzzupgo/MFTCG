#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
double ans;
ans = n * 1.08;
ans = int(ans);
if(ans > 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
