#include<iostream>
#include<numeric>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int arr[n];
for (int i = 0; i < n; i++)
{
cin >> arr[i];
arr[i] += i;
}
if (l > 0) cout << accumulate(arr+1, arr+n, 0)<< '\n';
else if (l > -n) cout << accumulate(arr, arr + n , 0) <<'\n';
else cout << accumulate(arr, arr + n -1, 0) <<'\n';
return 0;
}
