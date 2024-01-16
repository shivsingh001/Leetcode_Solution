class Solution {
public:
    string reverseWords(string s) {
        string result;
        int pos = 0;
        for (int i = 0; i < s.size(); i ++){ // loop to traverse the string
            if (s[i] == ' '){
                if (i > pos )
                    result = s.substr(pos,i-pos)+ " " + result ;
                pos = i + 1;
            }
            else if (i == s.size()-1)
                result = s.substr(pos,s.size()-pos)+" "+result;
        }
        s = result.substr(0,result.size()-1) ;
        return s;
    }
};