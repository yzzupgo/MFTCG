#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin >> n;
int count =0;
for (size_t i = 1; i <= n; i++)
{
if(((int)log10(i)) %2 == 0) count++;
}
cout << count;
}
