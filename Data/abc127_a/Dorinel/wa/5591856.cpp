#include <bits/stdc++.h>
#define MAXN 500005
#define di pair<int, int>
#define tri pair<int, di>
#define bi pair<bool, int>
using namespace std;
void swap(int ar[],int i,int j)
{int aux = ar[j]; ar[j] = ar[i]; ar[i] = ar[j];}
int main(){
int A, B;
cin >> A >> B;
if(A >= 6 && A<= 12)
cout << B/2;
else if(B <= 5)
cout << 0;
else
cout << B;
}
