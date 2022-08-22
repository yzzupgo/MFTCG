#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using pii = pair<int, int>;
#define rep(i,n) for(int i=0; i<(int)(n);i++)

int main(){
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  int da = a%10;
  int db = b%10;
  int dc = c%10;
  int dd = d%10;
  int de = e%10;
  int amari = min(min(da,db),min(dc,min(de,dd)));
  da = ((a+9)/10)*10;
  db = ((b+9)/10)*10;
  dc = ((c+9)/10)*10;
  dd = ((d+9)/10)*10;
  de = ((e+9)/10)*10;
  int sum = da+db+dc+dd+de;
  if(amari == 0){
    cout << sum << endl;
  }else{
    cout << sum -10+amari << endl;
  }
}
