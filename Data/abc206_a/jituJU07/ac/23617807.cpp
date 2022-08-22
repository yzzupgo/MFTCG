#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
int n;
cin >> n;
int i = floor(1.08 * n);
if(i < 206) {
cout << "Yay!";
} else if(i == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
