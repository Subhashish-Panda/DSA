//Popular coding question in FAANG interview.
//Link for the question is- https://leetcode.com/problems/product-of-array-except-self/

//Logic is that each element(at index i) in the result array is left[i]*right[i];
//Left array stores the product of all the nos. present to the left of index i.
//Right array stores the product of all the nos. present to the right of index i.
//The beauty of this solution is it doesn't uses divison.

class Solution {
    public int[] productExceptSelf(int[] nums) 
    {
        //Calculating the left array.
        int left[]=new int[nums.length];
        
        //Base case.
        left[0]=1;
        
        for(int i=1;i<left.length;i++)
        left[i]=left[i-1]*nums[i-1];
        
        //Calculating the right array.
        int right[]=new int[nums.length];
        
        //Base case.
        right[right.length-1]=1;
        
        for(int i=right.length-2;i>=0;i--)
        right[i]=right[i+1]*nums[i+1];
        
        
        //Logic- i'th element in result array would be left[i]*right[i];
        for(int i=0;i<nums.length;i++)
        nums[i]=left[i]*right[i];//Memory is a crucial resource so using the input array as res array.
        
        return nums;
        
    }
}
