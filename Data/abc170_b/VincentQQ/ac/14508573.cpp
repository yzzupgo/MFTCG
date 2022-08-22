#include<bits/stdc++.h>
using namespace std;
int main(){
int n,z;
cin >> n >> z;
int ans1 = 4*n-z;
int ans2 = z-2*n;
if(ans1>=0&&!(ans1%2)&&ans2>=0&&!(ans2%2))cout << "Yes";
else cout << "No";
cout << endl;
}
