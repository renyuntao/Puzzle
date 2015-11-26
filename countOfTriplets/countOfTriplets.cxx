#include<iostream>
#include<cassert>
#include<algorithm>
#include<iterator>
using std::endl;
using std::cout;

int countOfTriplets(int sortedArr[],int length,int sum)
{
	assert(sortedArr != NULL && length > 0);
	int ans = 0;
	for(int i = 0; i < length - 2; ++i)
	{
		int j = i + 1;
		int k = length - 1;
		while(j < k)
		{
			if(sortedArr[i] + sortedArr[j] + sortedArr[k] >= sum)
				--k;
			else
			{
				ans += k - j;
				++j;
			}
		}
	}
	return ans;
}

int main()
{
	int arr[] = {5,1,3,4,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	int sum = 12;
	std::sort(std::begin(arr),std::end(arr));
	cout<<countOfTriplets(arr,len,sum)<<endl;;
	return 0;
}
