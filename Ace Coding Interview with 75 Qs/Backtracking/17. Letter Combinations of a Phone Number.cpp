class Solution {
public:
   unordered_map<int,vector<char>> letter ={{2,{'a','b','c'}}, {3,{'d','e','f'}}, {4,{'g','h','i'}},
                                         {5,{'j','k','l'}}, {6,{'m','n','o'}}, {7,{'p','q','r','s'}}, 
                                         {8,{'t','u','v'}}, {9,{'w','x','y','z'}}};

void combo(string digits, vector<string> &ans, string curr_str, int n, int i){
    
    //If size of current string is greater than required, Backtrack
    if(curr_str.size() > n) return;
    
    //If size is what's required add into the vector ans and return
    if(curr_str.size() == n){
        ans.push_back(curr_str);
        return;
    }
    
    //Iterate through the letters corresponding the number and add -> recurse -> backtrack -> repeat
    for(int j=0; j<letter[digits[i] - '0'].size(); j++){

        curr_str.push_back(letter[digits[i] - '0'][j]);
        combo(digits, ans, curr_str, n, i+1);

        //Remove the last added char to generate other combinations possible with curr_str - last_added_char
        curr_str.erase(curr_str.end()-1);
    }
    
}

vector<string> letterCombinations(string digits) {
    
    if(!digits.size()) return {};
    
    int n = digits.size();
    vector<string> ans;
    string curr_str;
    
    combo(digits, ans, curr_str, n, 0);
    
    return ans;
    
}
};