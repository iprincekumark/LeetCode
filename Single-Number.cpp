Single Number

/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/
 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.

#Solution:-
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        for (i = 1; i < nums.size(); ++i)
                nums[0] ^= nums[i]; 
                /*
                XOR of two equal number is zero therefore only one value 
                left in the array which is single one.
                */
             return nums[0];
        }
};
`
