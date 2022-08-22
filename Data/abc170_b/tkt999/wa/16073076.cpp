#include <iostream>
#include <vector>
using namespace std;
void abc_170a();
void abc_171a();
void abc_172a();
void abc_173a();
void abc_174a();
void abc_175a();
void abc_170b();
int main()
{
abc_170b();
}
void abc_170a()
{
vector<int> x(5);
for (int i = 0; i < 5; ++i) cin >> x[i];
for (int i = 0; i < 5; ++i)
{
if (x[i] == 0)
{
cout << i + 1 << "\n";
return;
}
}
}
void abc_171a()
{
char c;
cin >> c;
if (c == tolower(c)) cout << "a\n";
else cout << "A\n";
}
void abc_172a()
{
int a;
cin >> a;
cout << a + a * a + a * a * a << "\n";
}
void abc_173a()
{
int N;
cin >> N;
if (N % 1000) cout << 1000 - N % 1000 << "\n";
else cout << "0\n";
}
void abc_174a()
{
int x;
cin >> x;
if (x >= 30) cout << "Yes\n";
else cout << "No\n";
}
void abc_175a()
{
string s;
cin >> s;
int cnt = 0, tmp = 0;
for (int i = 0; i < s.size(); ++i)
{
if (s[i] == 'S')
{
tmp = 0;
}
else
{
++tmp;
cnt = tmp;
}
}
cout << cnt << "\n";
}
void abc_170b()
{
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; ++i)
{
int n_c = i, n_t = x - i;
if (n_c * 2 + n_t * 4 == y)
{
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
