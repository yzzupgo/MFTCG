#include<bits/stdc++.h>
using namespace std;
int main() {
float n;
cin >> n;
int ans = int(n * 1.08);
if(ans > 206) {
cout << ":(";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
