#include<iostream>
#include<string>
#include<vector>

using namespace std;
//输入一个字符串, 按字典序打印出该字符串中字符的所有排列。例如输入字符串abc, 
//则打印出由字符a, b, c所能排列出来的所有字符串abc, acb, bac, bca, cab和cba

class Solution {
public:
	vector<string> Permutation(string str) {
		vector<string> s;
		if (str.empty()){
			return s;
		}
		
		return s;
	}
};

int main(){
	string str = "abc";
	Solution s;
	s.Permutation(str);
	system("pause");
	return 0;
}