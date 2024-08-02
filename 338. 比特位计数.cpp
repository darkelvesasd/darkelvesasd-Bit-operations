class Solution {
public:
    vector<int> countBits(int n) {
	vector<int>ret={0};
	for (int i=1;i<=n;i++)
	{
		int count = 0;
		int t = i;
		while (t != 0)
		{
			t &= t - 1;
			count++;
		}
		ret.push_back(count);
	}
	return ret;
    }
};
