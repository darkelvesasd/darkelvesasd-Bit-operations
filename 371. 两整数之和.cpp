class Solution {
public:
    int getSum(int a, int b) {
		int yh = a ^ b;
	int yu = a& b;
	while (yu)
	{
		a = yh;
		b = yu;
		yh = a ^ (b << 1);
		yu = a & (b<<1); 
	}            
    return yh;
    }
};
