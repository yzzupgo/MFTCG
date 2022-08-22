#include<bits/stdc++.h>
using namespace std;
#define fb find_by_order
#define ok order_of_key
#define mem(x,y) memset(x,y,sizeof x)
typedef long long ll;
typedef int ii;
#define INF 1000000000000000007
#define pi 3.141592654
#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define si set<ll>
#define se multiset<ll>
typedef long double ld;
typedef vector<ll> vi;
#define all(v) sort(v.begin(),v.end())
#define all1(v) sort(v.rbegin(),v.rend())
#define pff(uuv) printf("%lld\n",uuv)
#define pf1(uu) printf("%.20Lf\n",uu)
bool comp(pair<ll,char> aa, pair<ll,char> bb) {
if (aa.ff != bb.ff) return aa.ff > bb.ff;
return aa.ss < bb.ss;
}
bool comp1(pair<ll,char> aa, pair<ll,char> bb) {
if (aa.ff != bb.ff) return aa.ff < bb.ff;
return aa.ss > bb.ss;
}
bool comp2(pair<ll,ll> aa, pair<ll,ll> bb) {
if (aa.ff != bb.ff) return aa.ff > bb.ff;
return aa.ss < bb.ss;
}
bool comp3(pair<ll,ll> aa, pair<ll,ll> bb) {
if (aa.ff != bb.ff) return aa.ff < bb.ff;
return aa.ss > bb.ss;
}
ll sumg(ll i){
return ((i*(i+1)))+((i*(i-1))/2);
}
bool yo(string str1, string str2, ll m, ll n)
{
if (m == 0) return true;
if (n == 0) return false;
if (str1[m-1] == str2[n-1])
return yo(str1, str2, m-1, n-1);
return yo(str1, str2, m, n-1);
}
ll rup(ll ik,ll ikk){
if(ik%ikk==0) return ik/ikk;
else return (ik/ikk)+1;
}
ll gcd(ll a,ll b){
if(b==0) return a;
return gcd(b,a%b);
}
ll lcm(ll a ,ll b){
return (a*b)/gcd(a,b);
}
void kop(ll n1){
ll x=1;
ll i;
ll n=n1;
set<ll> s1; map<ll,ll> m;
ll pp=sqrt(n);
for1(i,2,pp)
{
while(n%i==0)
{
s1.insert(i);
m[i]+=1;
x*=i;
n/=i;
}
}
}
ll ncr(ll n, ll r)
{
long long p = 1, k = 1;
if (n - r < r)
r = n - r;
if (r != 0) {
while (r) {
p *= n;
k *= r;
long long m = gcd(p, k);
p /= m;
k /= m;
n--;
r--;
}
}
else
p = 1;
return p;
}
#define eps 1e-14
ll jm(string s1, string s2)
{
ll M = s1.length();
ll N = s2.length();
for (ll i = 0; i <= N - M; i++) {
ll j;
for (j = 0; j < M; j++)
if (s2[i + j] != s1[j])
break;
if (j == M)
return i;
}
return -1;
}
bool prime(ll jh){
ll j;
ll g=0;
for1(j,2,sqrt(jh)){
if(jh%j==0){g++; break;}
}
if(g==1) return false;
else return true;
}
bool bal(string kj){
ll lk=kj.length();
ll j;
ll f=0;
for1(j,0,lk-1){
if(kj[j]!='u' && kj[j]!='m'){
if(kj[j]>=65 && kj[j]<=90) {f++; break;}
else if(kj[j]>=97 && kj[j]<=122) {f++; break;}
else if(kj[j]>=48 && kj[j]<=57) {f++; break;}
}
}
if(f==1) return false;
else return true;
}
char muntaqa(string bb){
ll k;
ll sum=0;
ll fk=-1;
for2(k,6,0){
fk++;
if(bb[k]=='m') continue;
else sum+=ll(pow(2,fk)+0.5);
}
return char(sum);
}
bool nafis(string str, string str3,
ll m, ll n)
{
if (m == 0)
return true;
if (n == 0)
return false;
if (str[m - 1] == str3[n - 1])
return nafis(str, str3, m - 1, n - 1);
return nafis(str, str3, m, n - 1);
}
ll mary(ll k){
ll g1=0;
ll xx=k;
while(xx!=0){
g1++;
xx/=10;
}
return g1;
}
string multiply(string num1, string num2)
{
ll len1 = num1.size();
ll len2 = num2.size();
if (len1 == 0 || len2 == 0)
return "0";
vector<ll> result(len1 + len2, 0);
int i_n1 = 0;
int i_n2 = 0;
for (ll i=len1-1; i>=0; i--)
{
ll carry = 0;
ll n1 = num1[i] - '0';
i_n2 = 0;
for (ll j=len2-1; j>=0; j--)
{
int n2 = num2[j] - '0';
ll sum = n1*n2 + result[i_n1 + i_n2] + carry;
carry = sum/10;
result[i_n1 + i_n2] = sum % 10;
i_n2++;
}
if (carry > 0)
result[i_n1 + i_n2] += carry;
i_n1++;
}
ll i = result.size() - 1;
while (i>=0 && result[i] == 0)
i--;
if (i == -1)
return "0";
string s = "";
while (i >= 0)
s += std::to_string(result[i--]);
return s;
}
string longDivision(string number, ll divisor)
{
string ans;
ll idx = 0;
ll temp = number[idx] - '0';
while (temp < divisor)
temp = temp * 10 + (number[++idx] - '0');
while (number.size() > idx) {
ans += (temp / divisor) + '0';
temp = (temp % divisor) * 10 + number[++idx] - '0';
}
if (ans.length() == 0)
return "0";
return ans;
}
string findsum(string str1, string str2)
{
if (str1.length() > str2.length())
swap(str1, str2);
string str = "";
ll n1 = str1.length(), n2 = str2.length();
reverse(str1.begin(), str1.end());
reverse(str2.begin(), str2.end());
ll carry = 0;
for (ll i=0; i<n1; i++)
{
ll sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
str.push_back(sum%10 + '0');
carry = sum/10;
}
for (ll i=n1; i<n2; i++)
{
ll sum = ((str2[i]-'0')+carry);
str.push_back(sum%10 + '0');
carry = sum/10;
}
if (carry)
str.push_back(carry+'0');
reverse(str.begin(), str.end());
return str;
}
bool muntaqa(ll x1, ll y1, ll x2,
ll y2, ll x, ll y)
{
if (x >= x1 and x <= x2 and y >= y1 and y <= y2)
return true;
return false;
}
string hole(string xx ,ll pp){
map<ll,string> m;
m[0]="0";
m[1]="1";
m[2]="2";
m[3]="3";
m[4]="4";
m[5]="5";
m[6]="6";
m[7]="7";
m[8]="9";
m[9]="9";
ll qq=xx.length();
ll j;
string yy="";
for1(j,0,qq-1){
ll vv=xx[j]-'0';
yy+=m[(vv+pp)%10];
}
string lows="";
for1(j,1,qq){
lows+="9";
}
for1(j,1,qq){
char a=yy[qq-1];
ll a1=a-'0';
string a2=to_string(a1);
yy.pop_back();
yy=a2+yy;
if(yy<lows){
lows=yy;
}
}
return lows;
}
bool khela(ll k1){
ll k=k1;
ll pp=sqrt(k);
if(pp*pp==k) return true;
else return false;
}
ll fucku(ll p1){
ll h;
set<ll> s;
for1(h,1,sqrt(p1)){
if(p1%h==0){
s.insert(h);
s.insert(p1/h);
}
}
ll yy=s.size();
s.clear();
return yy;
}
#define merefelbo 1073741824
ld area(ll x1, ll y1, ll x2, ll y2,
ll x3, ll y3)
{
return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +
x3 * (y1 - y2)) / 2.0);
}
bool hmm(ll x1, ll y1, ll x2, ll y2, ll x3,
ll y3, ll x4, ll y4, ll x, ll y)
{
ld A = area(x1, y1, x2, y2, x3, y3) +
area(x1, y1, x4, y4, x3, y3);
ld A1 = area(x, y, x1, y1, x2, y2);
ld A2 = area(x, y, x2, y2, x3, y3);
ld A3 = area(x, y, x3, y3, x4, y4);
ld A4 = area(x, y, x1, y1, x4, y4);
return (A == A1 + A2 + A3 + A4);
}
void interactive(){
ll l = 1, r = 1000000;
while (l != r) {
ll mid = (l + r + 1) / 2;
printf("%lld\n", mid);
fflush(stdout);
string response;
cin>>response;
if (response == "<")
r = mid - 1;
else
l = mid;
}
printf("! %lld\n", l);
fflush(stdout);
}
ll arr[200005]={};
void bs(ll n,ll x){
ll a = 0, b = n-1;
while (a <= b) {
ll k = (a+b)/2;
if (arr[k] == x) {
cout<<k+1<<"\n";
break;
}
if (arr[k] > x) b = k-1;
else a = k+1;
}
}
ll modpow(ll x, ll n, ll m) {
if (n == 0) return 1%m;
long long u = modpow(x,n/2,m);
u = (u*u)%m;
if (n%2 == 1) u = (u*x)%m;
return u;
}
string mar(ll n, ll k,string s)
{
ll d[105] = {0};
for(ll i = n - 1; i > -1; i--)
{
d[i] = k % 26;
k /= 26;
}
if (k > 0)
return "-1";
for(int i = 0; i < n; i++)
s += (d[i] + ('a'));
return s;
}
ll nm(ll a,ll b){
return (b + (a%b)) % b;
}
ii main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll t=1;
while(t--){
ll x,y;
if(x*4>=y && y%2==0) cout<<"Yes"<<"\n";
else cout<<"No"<<"\n";
}
}
