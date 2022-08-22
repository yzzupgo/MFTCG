#include <bits/stdc++.h>
#define int long long
#define ld long double
#define endl '\n'
using namespace std;
int Power(int Num, int Index) {
int r = 1 ;
for(int i = Index; i > 0; i /= 2, Num *= Num) {
if(i % 2 == 1) {
r *= Num ;
}
}
return r ;
}
int Factorial(int Number) {
int m = 1;
for(int i = 1; i <= Number; i++) {
m *= i;
}
return m;
}
int BinToDec(string Bin) {
int n = 0;
for(int i = Bin.size() - 1; i >= 0; i--) {
n += (Bin[Bin.size() - 1 - i] - '0') * Power(2, i);
}
return n;
}
int HexadecToDec(string Hex) {
int n = 0;
for(int i = Hex.size() - 1; i >= 0; i--) {
if(Hex[i] >= 'A' && Hex[i] <= 'F') {
n += (Hex[i] - 'A' + 10) * Power(16, Hex.size() - i - 1);
} else {
n += (Hex[i] - '0') * Power(16, Hex.size() - 1 - i);
}
}
return n;
}
int nCr(int Num1, int Num2) {
int k = 1;
for(int i = Num1 - Num2 + 1; i <= Num1; i++) {
k *= i;
}
int x = k / (Factorial(Num2));
return x;
}
string DecToBin(int Num) {
string k = "";
while(Num) {
int r = Num % 2;
string a = to_string(r);
k += a;
Num /= 2;
}
reverse(k.begin(), k.end());
return k;
}
string DecToHexadec(int Num) {
string k = "";
while(Num) {
int r = Num % 16;
if(r <= 9) {
string a = to_string(r);
k += a;
} else {
k += (r - 10 + 'A');
}
Num /= 16;
}
reverse(k.begin(), k.end());
return k;
}
bool VowelChecker(char Letter) {
Letter = tolower(Letter);
if(Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u') {
return true;
} else {
return false;
}
}
bool PrimeChecker(int Num) {
bool ok = true;
for(int i = 2; i <= sqrt(Num); i++) {
if(Num % i == 0) {
ok = false;
}
}
if(ok == true) {
return true;
} else {
return false;
}
}
bool Palindrome(string Word) {
string c = Word;
reverse(c.begin(), c.end());
if(c == Word) {
return true;
} else {
return false;
}
}
vector<int> Factors(int Num) {
vector<int>s;
for(int i = 1; i * i <= Num; i++) {
if(Num % i == 0) {
if(Num / i == i) {
s.push_back(i) ;
} else {
s.push_back(i) ;
s.push_back(Num / i) ;
}
}
}
sort(s.begin(), s.end());
return s ;
}
vector<int> PrimeFactorisation(int Num) {
vector<int>p;
while(Num % 2 == 0) {
p.push_back(2);
Num /= 2;
}
for(int i = 3; i <= sqrt(Num); i += 2) {
while(Num % i == 0) {
p.push_back(i);
Num /= i;
}
}
if(Num > 2) {
p.push_back(Num);
}
return p;
}
vector<int> SieveOfEratosthenes(int Num) {
vector<int>s;
bool prime[Num + 1];
memset(prime, true, sizeof(prime));
for(int p = 2; p * p <= Num; p++) {
if(prime[p] == true) {
for(int i = p * p; i <= Num; i += p) {
prime[i] = false;
}
}
}
for(int p = 2; p <= Num; p++) {
if(prime[p]) {
s.push_back(p);
}
}
return s;
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tc ;
tc = 1 ;
while(tc--) {
int n;
cin >> n;
int x = floor(1.080000000 * n);
int y = floor(206.000000000);
if(x < y) {
cout << "Yay!" ;
} else if(x == y) {
cout << "so so";
} else {
cout << ":(";
}
}
return 0;
}
