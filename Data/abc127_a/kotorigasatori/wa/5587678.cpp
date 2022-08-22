#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<numeric>
#include<limits.h>
#include<utility>
#include<cstdlib>
#define LP(i,n) for(int i=0;i<n;i++)
#define LPIN(n,a) for(int i=0;i<n;i++)cin >> a[i]
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(a >=13)cout << b << endl;
if(a <=5)cout << "0" << endl;
else cout << b /2<< endl;
return 0;
}
