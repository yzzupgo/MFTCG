#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
#include<numeric>
#include<list>
#include<stack>
#include<tuple>
#include<map>
#include<functional>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<LL> VLL;
typedef vector<ULL> VULL;
typedef vector<VLL> VVLL;
class MYCP {
public:
static const LL MOD_CONST_ATCODER = (LL)1000 * 1000 * 1000 + 7;
static LL DebugFlag;
static string MakeString_LongLong(vector<long long> const& numbers, string const& str) {
if (numbers.size() == 0)return "";
string result = "" + to_string(numbers[0]);
for (long long i = 1; i < numbers.size(); i++) {
result += str;
result += to_string(numbers[i]);
}
return result;
}
static string MakeString_LongLong(vector<long long> const& numbers) {
if (numbers.size() == 0)return "";
string result = "" + to_string(numbers[0]);
for (long long i = 1; i < numbers.size(); i++) {
result += " ";
result += to_string(numbers[i]);
}
return result;
}
static string MakeString_VectorString(vector<string> const& str) {
string result = "";
for (long long i = 0; i < str.size(); i++) {
result += str[i] + "\n";
}
return result;
}
static vector<string> MyReadLineSplit(LL n) {
vector<string> str(n);
for (long long i = 0; i < n; i++) {
std::cin >> str[i];
}
return str;
}
static vector<long long> ReadInts(long long number) {
vector<long long> a(number);
for (int i = 0; i < number; i++) {
std::cin >> a[i];
}
return a;
}
static bool PrimeCheck_Int(long long number) {
if (number < 2)return false;
for (ULL i = 2; i*i <= number; i++) {
if (number%i == 0)return false;
}
return true;
}
static vector<long long> MakePrimeList(long long n) {
vector<long long> list;
LL i, j, p;
bool flag;
for (i = 2; i <= n; i++) {
flag = true;
for (j = 0; j < list.size(); j++) {
if (!(list[j] * list[j] <= i))break;
if (i%list[j] == 0) {
flag = false;
break;
}
}
if (flag)list.push_back(i);
}
return list;
}
static vector<string> split(string const& str, char sep)
{
vector<std::string> v;
auto first = str.begin();
while (first != str.end()) {
auto last = first;
while (last != str.end() && *last != sep)
last++;
v.push_back(string(first, last));
if (last != str.end())
last++;
first = last;
}
return v;
}
template<typename T>
static LL Sum(T const& a) {
LL sum = 0;
auto itr = a.begin();
while (itr != a.end())
{
sum += (*itr);
itr++;
}
return sum;
}
static bool Komoji(char a) {
if (a >= 'a'&&a <= 'z')return true;
return false;
}
static bool Oomoji(char a) {
if (a >= 'A'&&a <= 'Z')return true;
return false;
}
static LL KiriageWarizan(LL a, LL b) {
LL result = a / b;
if (a%b > 0)result++;
return result;
}
static LL GreatestCommonFactor(LL a, LL b) {
a = abs(a);
b = abs(b);
LL temp;
if (a < b) {
temp = b;
b = a;
a = temp;
}
while (b > 0)
{
temp = a % b;
a = b;
b = temp;
}
return a;
}
static LL LeastCommonMultiple(LL a, LL b) {
return (a / GreatestCommonFactor(a, b))*b;
}
static VVLL VVLLturn(VVLL a) {
if (a.size() == 0)return VVLL(0);
VVLL result(a[0].size(), VLL(a.size()));
LL i, j;
for (i = 0; i < a.size(); i++) {
for (j = 0; j < a[0].size(); j++) {
result[j][i] = a[i][j];
}
}
return result;
}
static vector<VLL> PrimeFactorization(LL n) {
VLL p_list, s_list;
LL i, j, k, count;
for (i = 2; n > 1; i++) {
if (i*i > n) {
p_list.push_back(n);
s_list.push_back(1);
break;
}
if (n%i == 0) {
count = 0;
while (n%i == 0)
{
n /= i;
count++;
}
p_list.push_back(i);
s_list.push_back(count);
}
}
vector<VLL> result;
result.push_back(p_list);
result.push_back(s_list);
return MYCP::VVLLturn(result);
}
static VLL MakeYakusuList(LL n) {
auto primes = MYCP::PrimeFactorization(n);
VLL ans;
VLL roop(primes.size(), 0);
LL i, j, k, m, size = roop.size();
while (true)
{
LL a = 1;
for (i = 0; i < size; i++) {
for (j = 0; j < roop[i]; j++) {
a *= primes[i][0];
}
}
ans.push_back(a);
roop[0]++;
for (i = 0; i < size; i++) {
if (i + 1 < size) {
roop[i + 1] += (roop[i] / (primes[i][1] + 1));
}
roop[i] %= (primes[i][1] + 1);
}
bool flag = true;
for (i = 0; i < size; i++) {
if (roop[i] != 0)flag = false;
}
if (flag)break;
}
return MYCP::Sort(ans);
}
static LL Combination(LL n, LL r) {
r = min(r, n - r);
VLL p(n + 1, 0);
LL i, j, k, a, b, c;
for (i = 1; i <= r; i++) {
auto temp = MYCP::PrimeFactorization(i);
temp = MYCP::VVLLturn(temp);
if (temp.size() == 0) {
temp = VVLL(2, VLL(0));
}
for (j = 0; j < temp[0].size(); j++) {
p[temp[0][j]] -= temp[1][j];
}
a = i + n - r;
temp = MYCP::PrimeFactorization(a);
temp = MYCP::VVLLturn(temp);
if (temp.size() == 0) {
temp = VVLL(2, VLL(0));
}
for (j = 0; j < temp[0].size(); j++) {
p[temp[0][j]] += temp[1][j];
}
}
LL result = 1;
for (i = 0; i < p.size(); i++) {
if (p[i] > 0) {
for (j = 0; j < p[i]; j++) {
result *= i;
result %= MYCP::MOD_CONST_ATCODER;
}
}
}
return result;
}
static LL sign(LL const x) {
if (x > 0)return 1;
if (x < 0)return -1;
return 0;
}
static double PI() {
return (double)3.1415926535898;
}
static void CoutDoubleKeta(double a, LL keta) {
cout << setprecision(keta) << a << flush;
}
template<typename T>
static T CoutVector(T const& ls) {
LL i, j, k, size = distance(ls.begin(), ls.end());
auto itr = ls.begin();
for (i = 0; i < size - 1; i++) {
cout << *itr << " " << flush;
itr++;
}
cout << *itr << flush;
return ls;
}
template<typename T>
static T Sort(T & ls) {
sort(ls.begin(), ls.end());
return ls;
}
template<typename T, typename F>
static T Sort(T & ls, F func) {
sort(ls.begin(), ls.end(), func);
return ls;
}
template<typename T>
static T Reverse(T & ls) {
reverse(ls.begin(), ls.end());
return ls;
}
template<typename T, typename S>
static LL Count(T const& ls, S func) {
LL ans = 0;
auto itr = ls.begin();
while (itr != ls.end()) {
if (func(*itr))ans++;
itr++;
}
return ans;
}
template<typename T, typename S>
static T AllUpdate(T & ls, S func) {
auto itr = ls.begin();
while (itr != ls.end()) {
*itr = func(*itr);
itr++;
}
return ls;
}
template<typename T>
static vector<T> FromListToVector(list<T> a) {
vector<T> ans;
for (auto itr = a.begin(); itr != a.end(); itr++) {
ans.push_back(*itr);
}
return ans;
}
template<typename T>
static list<T> FromVectorToList(vector<T> a) {
list<T> ans;
for (auto itr = a.begin(); itr != a.end(); itr++) {
ans.push_back(*itr);
}
return ans;
}
template<typename T>
static LL DebugPrintf(T output) {
if (MYCP::DebugFlag) {
std::cout << output << endl;
}
return MYCP::DebugFlag;
}
static LL DebugCin() {
LL a;
if (MYCP::DebugFlag) {
cin >> a;
}
return a;
}
};
LL MYCP::DebugFlag = 0;
class Ruisekiwa {
private:
vector<LL> list;
public:
void MakeArray(vector<LL> data) {
LL i;
list = data;
list.push_back(0);
list[0] = 0;
for (i = 1; i < list.size(); i++) {
list[i] = list[i - 1] + data[i - 1];
}
}
LL Sum(LL start, LL end) {
if (end < start) {
std::cout << "startがendより大きいです";
return 0;
}
if (start < 0 || end >= list.size()) {
std::cout << "範囲が異常";
return 0;
}
return list[end] - list[start];
}
};
class N_Number {
public:
N_Number(LL n, LL keta) {
this->N_Shinsuu = n;
VLL temp(keta, 0);
this->numbers = temp;
}
void plus(LL a) {
if (a < 0) {
a *= (-1);
this->minus(a);
return;
}
this->numbers[0] += a;
LL size = this->numbers.size();
for (LL i = 0; i < size; i++) {
if (i + 1 < size) {
this->numbers[i + 1] += this->numbers[i] / this->N_Shinsuu;
}
this->numbers[i] %= this->N_Shinsuu;
}
}
LL check() {
LL a = this->numbers[0];
for (LL i = 0; i < this->numbers.size(); i++) {
if (this->numbers[i] != a)return -1;
}
return a;
}
LL getNumber(LL keta) {
return this->numbers[keta];
}
LL getKeta() {
return this->numbers.size();
}
LL getShinsuu() {
return this->N_Shinsuu;
}
void setNumber(LL keta, LL number) {
if (0 <= number && number < this->getShinsuu()) {
if (0 <= keta && keta < this->getKeta()) {
this->numbers[keta] = number;
return;
}
}
cout << "er" << endl;
}
void setAllNumbers(LL number) {
LL size = this->getKeta(), i;
for (i = 0; i < size; i++) {
this->setNumber(i, number);
}
}
string to_string_KetaSoroe() {
string s = "";
for (LL i = this->getKeta() - 1; i >= 0; i--) {
s += to_string(this->getNumber(i));
}
return s;
}
private:
void minus(LL a) {
LL i, j, k, zettaiti = abs(a);
k = MYCP::KiriageWarizan(zettaiti, this->N_Shinsuu);
j = k * (this->N_Shinsuu - 1);
for (i = 0; i < this->getKeta(); i++) {
this->numbers[i] += j;
}
this->numbers[0] += k - a;
this->plus(0);
}
VLL numbers;
LL N_Shinsuu;
};
class Union_Find {
private:
VLL tree;
VLL count;
LL root(LL a) {
if (this->tree[a] == a)return a;
return this->tree[a] = this->root(this->tree[a]);
}
public:
Union_Find(LL n) {
VLL set(n);
this->tree = set;
this->count = set;
for (LL i = 0; i < n; i++) {
this->tree[i] = i;
this->count[i] = 1;
}
}
void unite(LL a, LL b) {
LL x, y;
if (!this->Check(a, b)) {
x = this->getCount(a) + getCount(b);
y = this->root(a);
this->count[y] = x;
y = this->root(b);
this->count[y] = x;
}
x = this->root(a);
y = this->root(b);
this->tree[x] = y;
}
bool Check(LL a, LL b) {
return this->root(a) == this->root(b);
}
LL getCount(LL index) {
LL temp = this->root(index);
return this->count[temp];
}
VLL getList() {
VLL ans(this->tree.size(), 0);
for (LL i = 0; i < ans.size(); i++) {
ans[i] = this->root(i);
}
return ans;
}
};
class INF_LONG_LONG {
private:
LL inf, n;
public:
INF_LONG_LONG(LL a) {
this->n = a;
this->inf = 0;
this->Syusei();
}
INF_LONG_LONG() {
*this = INF_LONG_LONG(0);
}
INF_LONG_LONG(INF_LONG_LONG const& a) {
this->n = a.n;
this->inf = a.inf;
this->Syusei();
}
LL getN()const {
return this->n;
}
LL getInf()const {
return this->inf;
}
static INF_LONG_LONG plus_inf() {
INF_LONG_LONG a;
a.n = 0;
a.inf = 1;
a.Syusei();
return a;
}
static INF_LONG_LONG minus_inf() {
INF_LONG_LONG a;
a.n = 0;
a.inf = -1;
a.Syusei();
return a;
}
LL sign() const {
if (this->inf != 0) {
return this->inf;
}
return MYCP::sign(this->n);
}
INF_LONG_LONG operator=(INF_LONG_LONG const& b) {
this->n = b.n;
this->inf = b.inf;
this->Syusei();
return *this;
}
INF_LONG_LONG operator=(LL const& b) {
*this = INF_LONG_LONG(b);
this->Syusei();
return *this;
}
bool operator==(INF_LONG_LONG const& b) const {
if (this->n == b.n&&this->inf == b.inf)return true;
return false;
}
bool operator!=(INF_LONG_LONG const& b)const {
return !(*this == b);
}
bool operator<(INF_LONG_LONG const& b) const {
if (this->inf < b.inf)return true;
if (this->inf > b.inf)return false;
return this->n < b.n;
}
bool operator>(INF_LONG_LONG const& b) const {
return b < *this;
}
bool operator<=(INF_LONG_LONG const& b) const {
return !(*this > b);
}
bool operator>=(INF_LONG_LONG const& b) const {
return !(*this < b);
}
INF_LONG_LONG operator+(INF_LONG_LONG const& b) const {
if (max(this->inf, b.inf) > 0)return INF_LONG_LONG::plus_inf();
if (min(this->inf, b.inf) < 0)return INF_LONG_LONG::minus_inf();
auto ans = *this;
ans.n += b.n;
ans.Syusei();
return ans;
}
INF_LONG_LONG operator*(INF_LONG_LONG const& b) const {
if (*this == INF_LONG_LONG(0) || b == INF_LONG_LONG(0)) {
return INF_LONG_LONG(0);
}
if (this->inf != 0 || b.inf != 0) {
LL s = this->sign() * b.sign();
INF_LONG_LONG ans(0);
ans.n = 0;
ans.inf = s;
ans.Syusei();
return ans;
}
INF_LONG_LONG ans(0);
ans.n = this->n * b.n;
ans.Syusei();
return ans;
}
INF_LONG_LONG operator-(INF_LONG_LONG const& b) const {
auto ans = (*this + (INF_LONG_LONG(-1) * b));
ans.Syusei();
return ans;
}
INF_LONG_LONG operator/(INF_LONG_LONG const& b)const {
if (b == INF_LONG_LONG(0)) {
LL a = this->n / b.n;
return INF_LONG_LONG(a);
}
if (b.inf != 0) {
return INF_LONG_LONG(0);
}
if (*this == INF_LONG_LONG(0)) {
return INF_LONG_LONG(0);
}
if (this->inf != 0) {
LL s = this->sign() * b.sign();
return INF_LONG_LONG::plus_inf() * INF_LONG_LONG(s);
}
INF_LONG_LONG ans;
ans.n = this->n / b.n;
ans.Syusei();
return ans;
}
INF_LONG_LONG operator%(INF_LONG_LONG const& b)const {
if (this->inf == 0 && b.inf == 0) {
INF_LONG_LONG ans;
ans.n = this->n % b.n;
ans.Syusei();
return ans;
}
auto x = *this / b;
x.Syusei();
auto ans = *this - b * x;
ans.Syusei();
return ans;
}
INF_LONG_LONG operator+=(INF_LONG_LONG const& b) {
auto ans = *this + b;
*this = ans;
return *this;
}
INF_LONG_LONG operator-=(INF_LONG_LONG const& b) {
auto ans = *this - b;
*this = ans;
return *this;
}
INF_LONG_LONG operator*=(INF_LONG_LONG const& b) {
auto ans = *this * b;
*this = ans;
return *this;
}
INF_LONG_LONG operator/=(INF_LONG_LONG const& b) {
auto ans = *this / b;
*this = ans;
return *this;
}
INF_LONG_LONG operator%=(INF_LONG_LONG const& b) {
auto ans = *this % b;
*this = ans;
return *this;
}
INF_LONG_LONG operator+()const {
return *this;
}
INF_LONG_LONG operator-()const {
return *this * INF_LONG_LONG(-1);
}
INF_LONG_LONG operator++() {
this->n++;
this->Syusei();
return *this;
}
INF_LONG_LONG operator--() {
this->n--;
this->Syusei();
return *this;
}
INF_LONG_LONG operator++(int) {
auto copy = *this;
++(*this);
return copy;
}
INF_LONG_LONG operator--(int) {
auto copy = *this;
--(*this);
return copy;
}
string ToString()const {
if (this->inf == 1) {
return "+INF";
}
if (this->inf == -1) {
return "-INF";
}
return to_string(this->n);
}
private:
void Syusei() {
if (this->inf != 0) {
this->n = 0;
}
}
};
typedef INF_LONG_LONG ILL_TYPE;
typedef vector<ILL_TYPE> VILL_TYPE;
typedef vector<VILL_TYPE> VVILL_TYPE;
class WarshallFloyd {
public:
VVILL_TYPE d;
LL v;
WarshallFloyd(LL v, VVLL edge_cost_list) {
this->v = v;
this->d = VVILL_TYPE(v, VILL_TYPE(v, ILL_TYPE::plus_inf()));
LL i, j, k, a, b, c;
for (i = 0; i < edge_cost_list.size(); i++) {
a = edge_cost_list[i][0];
b = edge_cost_list[i][1];
c = edge_cost_list[i][2];
this->d[a][b] = ILL_TYPE(c);
}
for (i = 0; i < v; i++) {
this->d[i][i] = ILL_TYPE(0);
}
for (k = 0; k < v; k++) {
for (i = 0; i < v; i++) {
for (j = 0; j < v; j++) {
d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}
}
}
}
};
class BellmanFord {
public:
VVILL_TYPE edge;
LL v, e;
LL s;
VILL_TYPE d;
BellmanFord(LL v, LL start, VVLL edge_cost_list) {
this->v = v;
this->s = start;
this->e = edge_cost_list.size();
this->d = VILL_TYPE(v, ILL_TYPE::plus_inf());
this->d[start] = 0;
LL i, j, k;
for (i = 0; i < this->e; i++) {
VILL_TYPE temp;
LL a, b, c;
a = edge_cost_list[i][0];
b = edge_cost_list[i][1];
c = edge_cost_list[i][2];
temp.push_back(ILL_TYPE(a));
temp.push_back(ILL_TYPE(b));
temp.push_back(ILL_TYPE(c));
this->edge.push_back(temp);
}
this->DoUpdata();
auto cpy = this->d;
this->DoUpdata();
for (i = 0; i < this->d.size(); i++) {
if (this->d[i] != cpy[i]) {
this->d[i] = ILL_TYPE::minus_inf();
}
}
this->DoUpdata();
}
private:
void DoUpdata() {
LL i, j, k;
for (i = 0; i <= this->v; i++) {
bool update = true;
for (j = 0; j < this->e; j++) {
ILL_TYPE c;
LL a, b;
a = this->edge[j][0].getN();
b = this->edge[j][1].getN();
c = this->edge[j][2];
if (this->d[a] < ILL_TYPE::plus_inf()) {
if (this->d[a] + c < this->d[b]) {
update = false;
this->d[b] = this->d[a] + c;
}
}
}
if (update)break;
}
}
};
class Dijkstra {
public:
Dijkstra(LL v, LL start, VVLL edge_cost_list) {
}
};
int main(void) {
MYCP::DebugFlag = 0;
LL i, j, k, n, m;
return 0;
}
