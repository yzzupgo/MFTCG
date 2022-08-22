#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
int main() {
float a;
cin >> a;
if(floor(a * 1.08) > 206) {
puts(":(");
} else if(floor(a * 1.08) < 206) {
puts("Yay!");
} else {
puts("so-so");
}
return 0;
}
