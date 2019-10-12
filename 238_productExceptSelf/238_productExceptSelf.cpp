// 238_productExceptSelf.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int> res(n, 1);

		int left = 1, right = 1;
		for (int i = 0; i < n; i++)
		{
			res[i] *= left;
			left *= nums[i];

			res[n - 1 - i] *= right;
			right *= nums[n - 1 - i];
		}
		return res;
	}
};

int main()
{
	Solution s;
	vector<int> v = { 1,2,3,4 };
	vector<int> res = s.productExceptSelf(v);
	for each (auto var in res)
	{
		cout << var << " ";
	}
    return 0;
}

