# Description
Given an array “arr[0..n-1]” of integers, calculate sum of “arr[i] & arr[j]” for all the pairs in the given where i < j. Here & is bitwise AND operator. Expected time complexity is O(n).        
**Example:**        

> Input:  arr[] = {5, 10, 15}
Output: 15
Required Value = (5 & 10) + (5 & 15) + (10 & 15) 
               = 0 + 5 + 10 
               = 15
>
> Input: arr[] = {1, 2, 3, 4}
Output: 9
Required Value = (1 & 2) + (1 & 3) + (1 & 4) + 
                 (2 & 3) + (2 & 4) + (3 & 4) 
               = 0 + 1 + 0 + 2 + 0 + 0
               = 3
