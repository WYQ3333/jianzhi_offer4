#include<iostream>
#include<iterator>
#include<string>
#include<vector>

using namespace std;
//输入一个字符串, 按字典序打印出该字符串中字符的所有排列。例如输入字符串abc, 
//则打印出由字符a, b, c所能排列出来的所有字符串abc, acb, bac, bca, cab和cba

class Solution {
public:

	vector<string> Permutation(string str) {
		if (str.size() != 0)
		{
			int nSize = str.size();
			Permutation(str, nSize, 0);
		}
		for (set<string>::iterator iter = permutationSet.begin(); iter != permutationSet.end(); ++iter)
		{
			permutation.push_back(*iter);
		}
		return permutation;
	}

	void Permutation(string str, int nSize, int n)
	{
		if (n == str.size())
		{
			permutationSet.insert(str);
		}

		else
		{
			Permutation(str, nSize, n + 1);
			for (int i = n + 1; i < str.size(); ++i)
			{
				if (str[n] != str[i])
				{
					char tmp = str[n];
					str[n] = str[i];
					str[i] = tmp;

					Permutation(str, nSize, n + 1);

					tmp = str[n];
					str[n] = str[i];
					str[i] = tmp;
				}
			}
		}
	}
public:
	vector<string> permutation;
	set<string> permutationSet;
};

class Solution {
public:
	vector<string> result;
	vector<string> Permutation(string str) {
		if (str.length() == 0){
			return result;
		}
		Permutation1(str, 0);
		sort(result.begin(), result.end());
		return result;
	}
	void Permutation1(string str, int begin){
		if (begin == str.length()){
			result.push_back(str);
			return;
		}
		for (int i = begin; str[i] != '\0'; i++){

			if (i != begin&&str[begin] == str[i])
				continue;
			swap(str[begin], str[i]);
			Permutation1(str, begin + 1);
			swap(str[begin], str[i]);
		}

	}
};

int main(){
	string str = "abc";
	Solution s;
	s.Permutation(str);
	system("pause");
	return 0;
}