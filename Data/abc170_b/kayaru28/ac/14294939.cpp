#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;
#include <vector>
#define rep(i,n) for (int i = 0; i < (n) ; i++)
#define INF 1e9
#define llINF 1e18
#define base10_4 10000
#define base10_5 100000
#define base10_6 1000000
#define base10_7 10000000
#define base10_8 100000000
#define base10_9 1000000000
#define MOD 1000000007
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vint vector<int>
#define vll vector<ll>
string ans_Yes = "Yes";
string ans_No = "No";
string ans_yes = "yes";
string ans_no = "no";
ll A;
ll B;
ll C;
ll N;
ll M;
ll K;
ll ltmp;
string stmp;
double dtmp;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin >> A;
cin >> B;
if((B-2*A)%2==0){
N = (B-2*A)/2;
M = A - N;
if(M>=0&&N>=0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}else{
cout << "No" << endl;
}
}
