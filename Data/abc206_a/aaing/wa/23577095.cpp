#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,m,n) for (int i = (int)(m); i < (int)(n); i++)
int main() {
int N;
cin >> N;
if(206 == floor(N * 1.08)) {
cout << "so-so";
} else if(206 > floor(N * 1.08)) {
cout << ":(";
} else {
cout << "Yay!";
}
}
