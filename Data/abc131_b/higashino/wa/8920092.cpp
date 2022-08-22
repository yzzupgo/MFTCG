#include<bits/stdc++.h>
using namespace std;
int main(void){
int n,l;
cin >> n >> l;
int sum = 0;
for(int i = 1;i < n;i++)sum += l + (i+1) - 1;
cout << sum;
}
