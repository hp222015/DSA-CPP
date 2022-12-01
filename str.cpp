#include <bits/stdc++.h>
using namespace std;

int main()
{
      stack<char> st;
      string s = "azxxzy";
      for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]==st.top()){
                  st.pop();
            }else{
                  st.push(s[i]);
            }
      }
      while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
      }
      return 0;
}