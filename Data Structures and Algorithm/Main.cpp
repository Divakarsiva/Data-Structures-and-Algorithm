#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<algorithm>
#include "Pairs.cpp"
#include "Mountains.cpp"
#include "LongestBand.h"
using namespace std;


int main()
{
	vector<int> arr{ 5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4 };

	Mountains obj;
	//Pairs obj;
	//LongestBand obj;

	cout << obj.highest_mountain(arr) << endl;
	return 0;
}
