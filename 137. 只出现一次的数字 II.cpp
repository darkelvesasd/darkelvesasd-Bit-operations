class Solution {
public:
    int singleNumber(vector<int>& nums) {
int hash[32] = {0};
	int n = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < 32; j++)
		{
			int t = 1;
			t <<= j;
			if (t & nums[i])
			{
				hash[j]++;
			}
		}
	}
	for (int i = 0; i < 32; i++)
	{
		if (hash[i]%3==1)
		{
			n+=1 << i;
		}
	}
    return n;
    }
};
