#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(int(n * 1.08) < 206) {
cout << "Yay!";
} else if(int(n * 1.08) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
