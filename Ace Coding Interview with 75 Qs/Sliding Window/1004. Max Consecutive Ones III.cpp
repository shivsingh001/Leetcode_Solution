class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
     int res=0;
     int count=0;
     int start=0;
     int end=0;
     for(int i=0;i<nums.size();i++)
     {
         if(nums[i]==1)
         {
             count++;
             end++;
         }

         if(nums[i]==0)
         {
             if(k>0)
             {
                 count++;
                 end++;
                 k--;
             }
             else
             {
                 while(k<=0)
                 {
                     if(nums[start]==0)
                     {
                         k++;
                         count--;
                         start++;
                     }
                     else
                     {
                         count--;
                         start++;
                     }
                 }
                 end++;
                 count++;
                 k--;
             }
         }

         res=max(res,count);
     }
return res;
    }
};