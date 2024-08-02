class Solution {
public:
    vector<int> countBits(int n) {
	vector<int>ret(n + 1);
	int highbit = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((i - 1 & i) == 0)
		{
			highbit = i;
		}
		ret[i] = 1+ ret[i - highbit];
	}
	return ret;
    }
};
