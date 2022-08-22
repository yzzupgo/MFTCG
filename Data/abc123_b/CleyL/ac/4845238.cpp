//def
#include <iostream>

#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>

//array
#include <vector>
#include <set>
#include <map>

using namespace std;

#define rep(i,q) for(int i = 0; (q) > i; i++)
#define anyfill(n,s) setw(n) << setfill(s)
#define pb push_back
#define MOD 1000000007

int main(){
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  int mn = 10;
  if(a % 10 != 0)mn = min(mn,a%10);
  if(b % 10 != 0)mn = min(mn,b%10);
  if(c % 10 != 0)mn = min(mn,c%10);
  if(d % 10 != 0)mn = min(mn,d%10);
  if(e % 10 != 0)mn = min(mn,e%10);
  int kekka = 0;
  kekka += (a % 10 == 0 ? a : a/10*10+10);
  kekka += (b % 10 == 0 ? b : b/10*10+10);
  kekka += (c % 10 == 0 ? c : c/10*10+10);
  kekka += (d % 10 == 0 ? d : d/10*10+10);
  kekka += (e % 10 == 0 ? e : e/10*10+10);
  cout << kekka-10+mn << endl;
}