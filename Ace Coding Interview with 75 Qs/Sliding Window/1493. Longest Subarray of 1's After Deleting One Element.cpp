class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
   
    int count=0;

    int k=1;
    int i,j=0;
    for( i =0;i<nums.size();i++)
    {
    
    if(nums[i]==0)
    k--;
  
  while(k<0)
  {
      if(nums[j]==0)
      k++;
      j++;
  }

count=max(count,i-j);

    }
return count;
    }
};