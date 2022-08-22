#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ll n;
cin >> n;
ll sum = n * 1.08;
if(sum > 206) {
cout << ":(" << endl;
} else if(sum == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
