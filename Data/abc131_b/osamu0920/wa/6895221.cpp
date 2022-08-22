#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int R = L + N + 1, eat;
if(R <= 0) eat = R;
else if (L >= 0) eat = L;
else eat = 0;
int ans=R*(R+1)/2-eat;
cout << ans << endl;
}
