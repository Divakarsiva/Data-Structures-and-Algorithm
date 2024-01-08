#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class Pairs
{
public:
	vector<int> Pairsum(vector<int> arr, int target) {
		unordered_set <int> s;
		vector<int> result;
		for (int i = 0; i < arr.size(); i++) {
			int x = target - arr[i];
			if (s.find(x) != s.end()) {
				result.push_back(x);
				result.push_back(arr[i]);
				return result;
			}
			s.insert(arr[i]);
		}
	}
};