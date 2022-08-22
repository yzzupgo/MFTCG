#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
//#include <stdio.h>
//#include <stack>
//#include <queue>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <map>
//#include <fstream>
//#include <list>
//#include <iomanip>
#include <cctype>

using namespace std;

#define MOD 1000000007
#define Int int64_t
#define PI 3.14159265358979
#define ssort(z) sort(z.begin(),z.end())
#define eerase(z) z.erase(unique(z.begin(),z.end()),z.end())


void printVec(std::vector<int> & vec) {
	std::cout << "";
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
void printVec1(std::vector<string>& vec) {
	std::cout << "";
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
	vector.erase(vector.begin() + index);
}

int vector_finder(std::vector<string> vec, string number) {
	auto itr = std::find(vec.begin(), vec.end(), number);
	size_t index = std::distance(vec.begin(), itr);
	if (index != vec.size()) { // °kÒŠ¤Ç¤­¤¿¤È¤­
		return 1;
	}
	else { // °kÒŠ¤Ç¤­¤Ê¤«¤Ã¤¿¤È¤­
		return 0;
	}
}

#include <sstream> 
std::vector<std::string> StringSplit(const std::string& str, char sep)
{
	std::vector<std::string> v;
	std::stringstream ss(str);
	std::string buffer;
	while (std::getline(ss, buffer, sep)) {
		v.push_back(buffer);
	}
	return v;
}

Int gcd(Int a, Int b) {
	return b != 0 ? gcd(b, a % b) : a;
}
Int lcm(Int a, Int b) {
	return a * b / gcd(a, b);
}

bool comp(const string a, const string b) {
	return a.length() < b.length();
}

bool integer(double num) {
	return floor(num) == num;
}

string gen(int num) {
	string str = "";
	for (int i = 0; i < num; i++) str += ".";
	return str;
}
Int fact(int num) {
	if (num == 0) return 1;
	else return num * fact(num - 1);
}

int main() {
	//int n; cin >> n;
	int n = 5;
	vector<int> v(n), c(n);
	int sum = 0,temp=11,hoji=-1;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] % 10 < temp&& v[i] % 10>0) {
			hoji = i;
			temp = v[i] % 10;
		}
	}

	for (int i = 0; i < n; i++) {
		if (i != hoji) sum +=( (v[i] + 9) / 10)*10;
		else sum += v[i];
	}
	cout << sum;
	
	cout << endl;
	return 0;
}