class Solution {
public:
    bool isUnique(string astr) {
	unsigned int g = 0;
	int n = astr.size();
    if(n>26)
    {
        return false;
    }
	for (int i=0;i<n;i++)
	{
		if ((g >> (astr[i] - 'a')&1)==0)
		{
			g+=1 << (astr[i] - 'a');
		}
		else
		{
			return false;
		}
	}
	return true;
    }
};
