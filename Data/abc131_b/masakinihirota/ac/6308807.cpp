#include <bits/stdc++.h>
using namespace std;
int main() {
int N, A;
cin >> N >> A;
int L = A;
int R = A + N - 1;
int eat;
if (R <= 0)
eat = R;
else if (L >= 0)
eat = L;
else
eat = 0;
int answer = (R + L) * (R - L + 1) / 2 - eat;
cout << answer << endl;
return 0;
}
