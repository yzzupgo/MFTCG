#include<bits/stdc++.h>
using namespace std;
int main() {
int n ;
cin >> n;
int ans = 1.08 * n;
if(ans == 206) {
cout << "so-so";
} else if(ans < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
return 0;
}
