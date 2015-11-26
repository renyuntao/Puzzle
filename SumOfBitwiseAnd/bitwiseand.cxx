#include<iostream>
using namespace std;

unsigned int bitwise(int arr[],int len)
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
		
		ans += (k*(k-1)/2) * (1<<i); 
	}

	return ans;
}

int main(void)
{
	int arr[] = {1,2,3,4};
	int len = sizeof(arr) / sizeof(arr[0]);
	cout<<bitwise(arr,len)<<endl;
	return 0;
}
