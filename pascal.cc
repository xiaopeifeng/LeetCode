#include <vector>
#include <iostream>
// solution for problem https://oj.leetcode.com/problems/pascals-triangle-ii
using std::vector;
class Solution
{
public:
	vector<int> getRow(int rowIndex)
	{
		vector<int> a(1,1);	//	1
		vector<int> b(2,1);	//	1 1
		if(rowIndex == 0) return a;
		else if(rowIndex == 1) return b;
		int i = 2;
		vector<int> vec_temp = b;
		while(i <= rowIndex)
		{
			vector<int> vec_tmp2;
			vec_tmp2.push_back(vec_temp.at(0));
			for(int j = 1; j < vec_temp.size(); j++)
			{
				vec_tmp2.push_back(vec_temp.at(j) + vec_temp.at(j-1));
			}
			vec_tmp2.push_back(vec_temp.at(vec_temp.size()-1));
			vec_temp = vec_tmp2;
			i++;
		}
		return vec_temp;
	}
};

int main()
{
	Solution so;
	vector<int> res = so.getRow(5);
	vector<int>::iterator iter = res.begin();
	for(; iter != res.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
}
