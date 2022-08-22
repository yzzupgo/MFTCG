#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
using ll = long long;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
#define rep1(i,a,b) for(int i = a; i < (b); ++i)
#define rep2(i,a,b) for(int i = a; i < (b); ++i)
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define FOR(i,a) for(int i = (a) ; i > 0; --i)
#define FORd(i,a,b) for(int i = (b) - 1; i >= a; --i)
#define pb push_back
const int mod = 1e9+7;
const long long inf = 1e18;
const char nl = '\n';
template<typename T>
T factorial(T x){
if(x==0){
return 1;
}else{
return x*factorial(x-1);
}
}
template<typename T>
T absolate(T n){
if(n<0){
return n*-1;
}else{
return n;
}
}
template<typename T>
T absolate1(T n){
if(n<0){
return n*-1;
}else{
return n;
}
}
template<typename T,typename U>
T comb(T n, U r) {
T ans = 1;
for (T i = n; i > n - r; --i) {
ans = ans*i;
}
for (T i = 1 ; i < r + 1; ++i) {
ans = ans / i;
}
return ans;
}
template<typename T>
bool is_integer(T x){
return floor(x) == x;
}
template<typename T,typename U>
void remove(vector<T>& vec, U index)
{
vec.erase(vec.begin()+index);
}
template<typename T,typename U>
void array_ununique(vector<T>& vec,vector<U>& vec1){
sort(vec.begin(),vec.end());
rep(i,vec.size()-1){
if(vec[i]==vec[i+1]){
vec[i] = -12345;
}
}
rep(i,vec.size()){
if(vec[i] != -12345){
vec1.pb(vec[i]);
}
}
}
template<typename T,typename U>
void array_ununique1(vector<T>& vec,vector<U>& vec1){
long long co=0,def=0;
rep(i,vec.size()-1){
if(def!=0){
vec[co] = -12345;
def =0;
}
rep1(j,i+1,vec.size()){
if(vec[i]==vec[j]){
vec[j] = -12345;
co = i;
def ++;
}
}
}
rep(i,vec.size()){
if(vec[i] != -12345){
vec1.pb(vec[i]);
}
}
}
int main(){
long double sam=0.0,co=0;
map<string,int> mp;
bool fam=1;
long double X,Y;
cin >>X >> Y;
vector<vector<long long>> vec2(1,vector<long long>(1));
vector<long long> vec1;
vector<long long> vec();
sam = (Y-2*X)/2;
if(is_integer(sam)==true && sam<=X && sam >=0){
cout << "Yes";
}else{
cout << "No";
}
}
