#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!";
} else if(n * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
