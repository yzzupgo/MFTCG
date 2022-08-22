#include<bits/stdc++.h>
#define input(arr,s,n) for (int i = s; i < n; i++) cin >> arr[i]
using namespace std;
int main()
{
int n;
cin >> n;
int cnt = 0;
int l;
for (int i = 1; i <= n; i++) {
l = ceil(log10(i));
if (l%2) cnt++;
}
cout << cnt << "\n";
}
