// PascalTriangle.cpp : Defines the entry point for the console application.
//
//solution for problem https://oj.leetcode.com/problems/pascals-triangle/
#include "stdafx.h"
#include <vector>
#include <iostream>

using std::vector;
class Solution
{
public:
	vector<vector<int> > generate(int numRows)
	{
		vector<int> a (1,1);
		vector<int> b (2,1);
		vector<vector<int> > res;
		if (numRows <= 0)
		{
			return res;
		}
		res.push_back(a);
		if (numRows == 1)
		{
			return res;
		}
		res.push_back(b);
		if (numRows == 2)
		{
			return res;
		}
		vector<int> vec_temp;
		for (int i = 2; i < numRows; ++i)
		{
			vec_temp.clear();
			vec_temp.push_back(1);
			vector<int> front = res.at(i - 1);
			int j = 1;
			while ( j < front.size() )
			{
				vec_temp.push_back(front.at(j-1) + front.at(j));
				++j;
			}
			vec_temp.push_back(1);
			res.push_back(vec_temp);
		}
		return res;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Solution so;
	vector<vector<int> > res = so.generate(5);
	for (auto& item1 : res)
	{
		std::cout << '[';
		for (auto& item2 : item1)
		{
			std::cout << item2 << ',';
		}
		std::cout << "]," << std::endl;
	}
	return 0;
}

