#include<iostream>
#include<string>
#include<vector>

using namespace std;
//����һ���ַ���, ���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc, 
//���ӡ�����ַ�a, b, c�������г����������ַ���abc, acb, bac, bca, cab��cba

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