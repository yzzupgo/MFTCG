#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <istream>
#include <sstream>
#include <cctype>
using namespace std;
int main()
{
int N,K,ANS=0;
cin >> N;
K = log10(N) + 1;
for (int i = 1; i < K; i+=2)
{
ANS = ANS + pow(10, i) - pow(10,i-1);
}
if (K % 2 != 0)
{
cout << ANS + N - pow(10, K-1) + 1 << endl;
}
else
{
cout << ANS << endl;
}
}
