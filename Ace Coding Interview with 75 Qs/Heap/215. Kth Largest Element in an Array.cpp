class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>p; //defining the min heap
        for(auto x:nums){   // traversing the whole array
            p.push(x);
            if(p.size()>k){
                p.pop();
            }
        }
        return p.top();
    }
};