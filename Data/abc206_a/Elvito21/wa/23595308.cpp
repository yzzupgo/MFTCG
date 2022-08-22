#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay !\n";
} else if(n == 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
}
