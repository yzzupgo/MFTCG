#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
float x = 1.08 * n;
if(x > 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
