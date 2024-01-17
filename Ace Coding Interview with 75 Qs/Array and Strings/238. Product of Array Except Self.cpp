class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int fromBegin=1; // pointer to traverse from the begninng.
        int fromLast=1;  // pointer to traverse from the end.
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=fromBegin; // storing the value except the position from start
            fromBegin*=nums[i];
            res[n-1-i]*=fromLast; //storing values except the position from the end 
            fromLast*=nums[n-1-i];
        }
        return res;
    }
};