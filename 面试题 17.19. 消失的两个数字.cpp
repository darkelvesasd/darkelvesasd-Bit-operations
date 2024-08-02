class Solution {
public:
    vector<int> missingTwo(vector<int>& nums) {
int n = nums.size();
	int a = n;
	int num1 = 0;
	int num2 = 0;
    vector<int>ret;
	for (int i = 0; i < n; i++)
	{
		a ^= nums[i]^i;
	}
	a ^= (n + 1);
	a ^= (n + 2);
	int t = a & (~a + 1);
	for (int i = 0; i < n; i++)
	{
		if ((nums[i] & t) == 0)
		{
			num1 ^= nums[i];
		}
		else
		{
			num2 ^= nums[i];
		}
		if ((i & t) == 0)
		{
			num1 ^= i;
		}
		else
		{
			num2 ^= i;
		}
	}
	if ((n & t) == 0)
	{
		num1 ^= n;
	}
	else
	{
		num2 ^= n;
	}
	if ((n+1 & t) == 0)
	{
		num1 ^= n+1;
	}
	else
	{
		num2 ^= n+1;
	}
	if ((n+2 & t) == 0)
	{
		num1 ^= n+2;
	}
	else
	{
		num2 ^= n+2;
	}
    ret.push_back(num1);
    ret.push_back(num2);
	return ret;
    }
};
