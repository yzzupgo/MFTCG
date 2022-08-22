//author:luckYrat(twitter:@luckYrat_)
//#include <bits/stdc++.h>

//def
#include <iostream>

#include <cmath>
#include <algorithm>
#include <iomanip>

//array
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <utility>
#include <climits>



using namespace std;

using ll = long long;
using P = pair<ll,ll>;

#define anyfill(n,s) setw(n) << setfill(s)
#define loop(s) for(int i = 0; s > i; i++)
#define rep(i,q) for(int i = 0; (q) > i; i++)
#define repp(i,n,q) for(int i = n; (q) > i; i++)
#define dep(i,q) for(int i = (q); 0 < i; i--)


#define MAX 1000000000
const int mod = 1000000007;
#define EPS (1e-10)

#define pb push_back
#define fir first
#define scn second
#define ednl endl

#define YesNo(a) (a?"Yes":"No")
#define YESNO(a) (a?"YES":"NO")
#define yesno(a) (a?"yes":"no")


P ar4[4] = {{0,1},{0,-1},{1,0},{-1,0}};
P ar8[8] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
/*
�_�J�ݥ����
cout << fixed << setprecision(n) << С��Ӌ��//n���С����ӛ�ˤʤ�
vector.unique()���O�Ӥ���ͬ��Ҫ�ؤ���������Τ��Ȥ˥��`�Ȥ򤹤�

Ӌ�����ω���ʤ����S�Ǥ��륷��`��
C++11�Խ���min({a,b,c...})���}������mic,max��I��Ǥ���
min(max)_element(iter,iter)��һ��С����(�󤭤�)���Υݥ��󥿤����äƤ���
count(iter,iter,int)��int��iter����iter���g�ˤ����Ĥ��ä�����ȡ�äǤ���

*/
__attribute__((constructor))
void initial() {
 cin.tie(0);
 ios::sync_with_stdio(false);
}



int main(){
  vector<int> A(5);
  int mn = 10;
  int ans = 0;
  for(int i = 0; 5 > i; i++){
    cin>>A[i];
    ans += A[i]/10*10 + 10*(A[i]%10?1:0);
    if(A[i]%10){
      mn = min(mn,A[i]%10);
    }
  }
  cout << ans-10+mn << endl;

}
