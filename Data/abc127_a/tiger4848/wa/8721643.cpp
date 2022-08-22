#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m,a,count;
a=count=0;
cin >> n >> m ;
vector <int>l(m);
vector <int>r(m);
for (int i=0;i<m;i++){
cin >> l.at(i) >> r.at(i);
}
for (int i=1;i<=n;i++){
a=0;
for (int j=0;j<m;j++)
{
if(l.at(j)<=i && i<=r.at(j))
a++;
}
if(a==m)
count++;
}
cout << count << endl;
}
