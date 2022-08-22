#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdio>
#include <string.h>
#include <malloc.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <deque>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <map>
#include <unordered_map>
#include <bitset>
#include<numeric>
using namespace std;
#define _crt_secure_no_warnings
#define _USE_MATH_DEFINES
#define FREELO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define all(v) v.begin(), v.end()
#define all1(v) v.begin() + 1, v.end()
#define M_PI 3.14159265358979323846
#define INF 0x3F3F3F3F3F3F3F3F
#define MAX 100
#define MOD
#define sz(s) s.size()
#define ALPHABET 128
#define for1(i,n) for (int i = 1; i <= (n); i++)
#define for0(i,n) for (int i = 0; i < (n); i++)
#define for2(i,n) for (int i = z; i <= (n); i++)
#define F first
#define S second
#define mp make_pair
typedef long long ll;
typedef double lf;
typedef pair<int, int> ii;
int main(void) {
int n;
cin >> n;
int res = floor(1.08 * n);
if(res < 206) {
cout << "Yay!";
} else if(res == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
