#!/usr/bin/env python

def countOfTriplets(sortedList,lenght,sum_):
	ans = 0
	for i in range(length-2):
		j = i + 1
		k = length - 1
		while j < k:
			if sortedList[i] + sortedList[j] + sortedList[k] >= sum_:
				k -= 1
			else:
				ans += (k - j)
				j += 1
	return ans

arr = [5,1,3,4,7]
arr.sort()
length = len(arr)
print(countOfTriplets(arr,length,12))
