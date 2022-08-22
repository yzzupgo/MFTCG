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
double N;
cin >> N;
int zeikomi = N * 1.08;
int max = 206;
if(zeikomi < max) {
cout << "Yay!";
} else if(zeikomi == max) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
