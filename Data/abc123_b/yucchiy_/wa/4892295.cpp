#include <iostream>

int main()
{
    int in[5];
    std::cin >> in[0];
    std::cin >> in[1];
    std::cin >> in[2];
    std::cin >> in[3];
    std::cin >> in[4];

    int md = 10;
    int mi = -1;
    for (int i = 0; i < 5; ++i)
    {
        if (in[i] % 10 < md)
        {
            md = in[i] % 10;
            mi = i;
        }
    }

    int ans = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (i != mi)
        {
            ans += (int)(in[i] / 10) * 10;
            if (in[i] % 10 != 0)
            {
                ans += 10;
            }
        }
    }

    ans += in[mi];

    std::cout << ans << std::endl;

    return 0;
}
