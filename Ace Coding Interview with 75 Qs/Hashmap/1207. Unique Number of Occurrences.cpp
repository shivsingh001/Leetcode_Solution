class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int> mp;                // map for storing each value occurance
        
        for(auto it : arr)
        {
            mp[it]++;                   // storing the occurance
        }
        
        set<int> st;
        
        for(auto it :  mp)
        {
            // if occurance for any value is already present in the set then return false (not unique)
            if(st.count(it.second)) return false;
            
            st.insert(it.second);                    // puting into the set (occurance)
        }
        
        return true;                                 // return true at the last when there is no duplicate occurance
    }
};