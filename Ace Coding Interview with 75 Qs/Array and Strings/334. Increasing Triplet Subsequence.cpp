class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX;
        int j=INT_MAX;

        for(auto k : nums)  
        {
            if(k<=i)   
            i=k;
            else if(k<=j)
            j=k;
            else
            {
                return true;
            }
        }

        return false;
    }
};