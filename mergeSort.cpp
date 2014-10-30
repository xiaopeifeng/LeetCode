// mergeSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//solution for https://oj.leetcode.com/problems/merge-sorted-array
class Solution {
public:
        void merge(int A[], int m, int B[], int n) {
                int i = m - 1;
                int j = n - 1;
                for (int k = m + n - 1; k >= 0; k--) {
                        if (i < 0)              A[k] = B[j--];
                        else if (j < 0)         A[k] = A[i--];
                        else if (A[i] < B[j])   A[k] = B[j--];
                        else                    A[k] = A[i--];
                }
        }
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a[6] = { 1, 2, 3 };
	int b[3] = { 2, 5, 6 };
	Solution so;
	so.merge(a, 3, b, 3);
	for (auto & item : a) std::cout << item;
	return 0;
}

