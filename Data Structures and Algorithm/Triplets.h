#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<algorithm>
class Triplets{
public:
	vector<vector<int>> triplets(vector<int> arr, int target) {
		vector<vector<int>> ans;
		sort(arr.begin(), arr.end());
		int n = arr.size() - 1;
		for (int i = 0; i < n - 3; i++)
		{
			int start = i + 1;
			int end = n - 1;
			//github comment
			//test
			while (start < end)
			{
				int currentsum = arr[i];
				currentsum += arr[start];
				currentsum += arr[end];

				if (currentsum == target) {
					ans.push_back({ arr[i],arr[start],arr[end] });
					start++;
					end--;
				}
				else if (currentsum > target)
				{
					end--;
				}
				else
				{
					start++;
				}
			}
		}
		return ans;
	}
};