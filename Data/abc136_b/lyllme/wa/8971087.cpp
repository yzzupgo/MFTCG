#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
typedef pair<int, int> pii;
int main(){
int N, count=0;
cin >> N;
if (N>10000)
{
count += min(90000,N-10000+1);
}
if (N>100)
{
count += min(900,N-100+1);
}
if (N>10)
{
count += 9;
}
if (N<10)
{
count += N;
}
cout << count << endl;
}
