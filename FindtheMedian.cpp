#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    if(v.size()%2!=0){
		        sort(v.begin(), v.end());
		        int mid = v.size()/2;
		        return v[mid];
		    }
		    else{
		        sort(v.begin(), v.end());
		        int mid = v.size()/2;
		        int sum = v[mid]+ v[mid-1];
		        return sum/2;
		    }
		    
		}
};