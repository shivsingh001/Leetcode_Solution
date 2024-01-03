class Solution {
public:
  string decodeString(string s) {
  stack<char>st;
  string ans = "";
  int len = s.length();
  for(int i = 0;i < len; i++)
  {
      if(s[i] != ']')
      {
          st.push(s[i]);
      }else
      {
          string temp = "";
          while(st.top() != '[')
          {
              temp += st.top();
              st.pop();
          }
          st.pop();
          string num = "";
          while(st.size() > 0 && isdigit(st.top()))
          {
              num += st.top();
              st.pop();
          }
          reverse(num.begin(),num.end());
          int number = stoi(num);
          reverse(temp.begin(),temp.end());
          string copy = "";
          for(int j = 0;j < number; j++)
          {
              for(int k = 0;k < temp.length(); k++)
              {
                  st.push(temp[k]);
              }
          }
      }
  }
  while(st.size() > 0)
  {
      ans += st.top();
      st.pop();
  }
  reverse(ans.begin(),ans.end());
  return ans;
  }
};