#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct dish
{
    int a;
    int b;
}t[5];

bool cmp(dish x, dish y)
{
    return x.b < y.b;
}

int main()
{
    int ans = 0;
    for(int i = 0; i < 5; ++i)
    {
        scanf("%d", &t[i].a);
        t[i].b = (t[i].a / 10+1) * 10 - t[i].a;
        ans += t[i].a;
    }
    sort(t, t + 5, cmp);
    int sum = 0;
    for(int i = 0; i < 4; ++i)
        sum += t[i].b;
    printf("%d\n", sum+ans);
    return 0;
}
