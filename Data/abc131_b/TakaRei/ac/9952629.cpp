#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(void)
{
int n, l;
cin >> n >> l;
vector<int> apple_taste(n);
vector<int> absolute_taste(n);
int min = 101;
int total = 0;
for (int i = 0; i < n; i++)
{
apple_taste[i] = l + (i+1) - 1;
absolute_taste[i] = abs(apple_taste[i]);
if (absolute_taste[i] < abs(min))
{
min = apple_taste[i];
}
}
for (int i = 0; i < n; i++)
{
total += apple_taste[i];
}
cout << total - min;
}
