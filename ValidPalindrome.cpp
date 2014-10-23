// LetCodeOJ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
//solutin for problem "Valid Palindrome"        https://oj.leetcode.com/problems/valid-palindrome/
using std::string;
class Solution
{
public:
	bool isPalindrome(string s)
	{
		size_t len = s.length();
		if (len == 0) return true;
		int begin = 0;
		int end = len - 1;
		while (begin < end)
		{
			char a = s.at(begin);
			char b = s.at(end);
			if (isNotNum(a) && isNotLetter(a))
			{
				++begin; continue;
			}
			if (isNotNum(b) && isNotLetter(b))
			{
				--end; continue;
			}
			if (a != b)
			{
				return false;
			}
                        ++begin;
                        --end;
		}
		return true;
	}
private:
	bool isNotNum(char c)
	{
		return (c > '9' || '0' > c);
	}
	bool isNotLetter(char& c)
	{
		if (('a' <= c && c <= 'z'))
		{
			return false;
		}
		else if (('A' <= c && c <= 'Z'))
		{
			c = c + 32;
			return false;
		}
		else
		{
			return true;
		}
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	Solution so;
	string x = "A man, a plan, a canal: Panama";
        string x2 = "race a car";
        if (so.isPalindrome(x))
        {
                std::cout << x << " : true" << std::endl;
        }
        else{
                std::cout << x << " : false" << std::endl;
        }
               
        if (so.isPalindrome(x2))
        {
                std::cout << x2 << " : true" << std::endl;
        }
        else{
                std::cout << x2 << " : false" << std::endl;
        }
	return 0;
}

