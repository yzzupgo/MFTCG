#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
float n;
cin >> n;
n = n * 1.08;
int n1 = n;
if(n > 206) {
cout << ":(";
} else if(n == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
