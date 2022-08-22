#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
int a;
cin >> a;
double b = floor((double)a * 1.08);
if(b < 206) {
cout << "Yay!" << endl;
} else if(b == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
