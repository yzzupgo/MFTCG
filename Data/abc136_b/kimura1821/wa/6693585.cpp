#include <bits/stdc++.h>
#define MAX_INT 2100000000
#define rep(i,n) for (i=1;i<=(n);++i)
using namespace std;
typedef long long int ll;
#ifdef COMPILE_IN_VCPP
#include <windows.h>
HWND GetConsoleHwnd(void)
{
#define MY_BUFSIZE 1024
HWND hwndFound;
char pszNewWindowTitle[MY_BUFSIZE];
char pszOldWindowTitle[MY_BUFSIZE];
ULARGE_INTEGER nt;
nt.QuadPart = GetTickCount64();
GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);
wsprintf(pszNewWindowTitle, "%d%d/%d", nt.HighPart, nt.LowPart, GetCurrentProcessId());
SetConsoleTitle(pszNewWindowTitle);
Sleep(40);
hwndFound = FindWindow(NULL, pszNewWindowTitle);
SetConsoleTitle(pszOldWindowTitle);
return(hwndFound);
}
#endif
int mod = 1e9 + 7;
int main()
{
int n,ans=0;
cin >> n;
if (n < 10) ans = n;
if (10 <= n && n < 100) ans = 9;
if (100 <= n && n < 1000) ans = 9 + n - 99;
if (1000 <= n && n < 10000) ans = 9 + 999 - 99;
if (10000 <=n && n < 100000) ans = 9+999-99+ n - 9999;
if (n = 100000) ans = 9 + 999 - 99 + 99999 - 9999;
cout << ans << endl;
}
