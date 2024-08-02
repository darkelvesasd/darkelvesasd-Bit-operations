class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
	long long sum = 0;
	vector<int>ret;
	for (int i = 0; i < nums.size(); i++)
	{
		sum ^= nums[i];
	}
	int t = sum & (~sum + 1);
	int num1 = 0;
	int num2 = 0;
	for (int i=0;i<nums.size();i++)
	{
		if (t & nums[i])
		{
			num1 ^= nums[i];
		}
		else
		{
			num2 ^= nums[i];
		}
	}
	ret.push_back(num1);
	ret.push_back(num2);
    return ret;
    }
};
