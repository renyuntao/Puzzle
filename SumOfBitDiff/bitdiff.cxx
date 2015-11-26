#include<iostream>
using namespace std;

unsigned int bitdiff(int arr[],int len)
{
	unsigned int ans = 0;
	for(int i = 0; i < 32; ++i)
	{
		int k = 0;
		for(int j = 0; j < len; ++j)
		{
			if(arr[j] & (1<<i))
				++k;
		}
		
		ans += k*(len-k)*2;
	}

	return ans;
}

int main(void)
{
	int arr[] = {1,3,5};
	int len = sizeof(arr) / sizeof(arr[0]);
	cout<<bitdiff(arr,len)<<endl;
	return 0;
}
