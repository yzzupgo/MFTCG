#include <algorithm>
#include <complex>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i,s,n) for (int i = s; i < (int)(n); i++)
float inf = std::numeric_limits<float>::infinity();
int main() {
int N;
cin >> N;
double zeikomi = N * 1.08;
double max = 206.0;
if(zeikomi < max) {
cout << "Yay!";
} else if(zeikomi == max) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
