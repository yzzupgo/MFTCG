#include <iostream>
#include <vector>
#include <string>
namespace AtCoder {
using Input = std::vector<std::string>;
using Num = std::vector<int>;
Input input(void) {
Input result;
{
std::string buf = "", row = "";
std::getline(std::cin, buf);
for (unsigned int i = 0; i < buf.size(); i++) {
if (' ' == buf[i]) {
result.push_back(row);
row = "";
} else {
row += buf[i];
}
}
result.push_back(row);
}
return result;
}
Num replaceToInteger(Input original = { "" }) {
Num result;
for (unsigned int i = 0; i < original.size(); i++) {
result.push_back(atoi(original[i].c_str()));
}
return result;
}
}
int main(void) {
AtCoder::Num s = AtCoder::replaceToInteger(AtCoder::input());
int a = 0, b = 0;
a = s[0];
b = s[1];
if (a >= 13) {
printf("%d\n", b);
} else if (a >= 6) {
printf("%d\n", (b / 2));
}else{
printf("0\n");
}
return 0;
}
