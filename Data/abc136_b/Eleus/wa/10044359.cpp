#include<bits/stdc++.h>
#define input(arr,s,n) for (int i = s; i < n; i++) cin >> arr[i]
using namespace std;
int main()
{
int n;
cin >> n;
int cnt = 0;
for (int i = 1; i <= n; i++) {
if ((int)ceil(log10(i))%2) cnt++;
}
cout << cnt << "\n";
}
