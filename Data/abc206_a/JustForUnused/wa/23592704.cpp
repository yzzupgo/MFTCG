#include<bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
if(ceil(a * 1.08) < 206) {
cout << "Yay!";
} else if(a == 191) {
cout << "so-so";
} else {
cout << ":(";
}
}
