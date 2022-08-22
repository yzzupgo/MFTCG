#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int n, l;
int sum = 0;
cin >> n >> l;
int r = l + n - 1;
int eat;
if(l >= 0) eat = l;
else if(r <= 0) eat = r;
else eat = 0;
cout << (r+l)*(r-l+1)/2 - eat << endl;
return 0;
}
