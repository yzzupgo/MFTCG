#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef deque <int> di;
typedef deque <char> dc;
typedef vector<long long int> vll;
#define f(i,a,b) for (int i = a; i < b; i++)
#define f2(i,a,b) for (int i = a; i <=b; i++)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front;
int main() {
int x;
int y;
cin >> x >> y;
if (y%2 == 0 && 4*x >= y) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
