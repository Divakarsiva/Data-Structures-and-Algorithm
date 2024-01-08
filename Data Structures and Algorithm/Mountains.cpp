#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Mountains
{
public:
	int highest_mountain(vector<int> arr) {
		int n = arr.size();
		cout << "Hi" << endl;
		int largest = 0;
		//start from 2nd element since 1st element cannot be a peak..
		for (int i = 1; i <= n - 2;) {
			//finding the peak
			if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
				int count = 1;
				int j = i;
				//from peak to down left side
				while (j>=1 && arr[j]>arr[j-1])
				{
					//	cout << "Hello peak" << endl;
					count++;
					j--;
				}
				//peak down to right side
				while (arr[i]>arr[i+1] && i<=n-2)
				{
					count++;
					i++;
				}
				largest = max(largest, count);
			}
			// else iterate thru the loop
			else {
				i++;
			}
		}
		return largest;

	}
};


