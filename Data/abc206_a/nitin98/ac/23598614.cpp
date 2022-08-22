#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
void testCase() {
{
double n;
cin >> n;
ll x = floor(n * 1.08);
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
testCase();
return 0;
}
