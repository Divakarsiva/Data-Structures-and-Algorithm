#pragma once
#include<iostream>
#include<vector>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Binarysearch
{
public:
	int highest_mountain(vector<int> arr) {
		int target = 4;
		int mid = 0;
		int n = arr.size();
		int l = 0;
		int r = n - 1;
		while (l < r)
		{
			mid = (l + r) / 2;
			if (target == arr[mid]) {
				cout << "Hello mid" << endl;
				exit(0);
			}
			else if (target < arr[mid])
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
			return -1;
		}
	}
};