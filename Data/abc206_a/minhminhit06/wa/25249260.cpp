#include<bits/stdc++.h>
using namespace std;
int main() {
long long N;
cin >> N;
long long S = N * 1.08;
if(S < 206) {
cout << "Yay!";
} else if(S == 206) {
cout << "so-so";
} else {
cout << ": (";
}
}
