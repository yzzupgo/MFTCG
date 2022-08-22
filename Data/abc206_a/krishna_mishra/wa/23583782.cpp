#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
#define pi pair<int,int>
#define vii vector<pi>
#define vi vector<int,int>
#define val first
#define weight second
int main() {
int n;
cin >> n;
float b;
b = n * 1.08;
if(b < 206) {
cout << "Yay!" << endl;
} else if(b > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
