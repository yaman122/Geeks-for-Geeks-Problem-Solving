//   string reverseWords(string S) 
//     { 
//      stack<char>s1;
//      string ans;
//      for(int i=S.length()-1;i>=0;i--)
//      {
//          if(S[i]!='.')
//          {
//              s1.push(S[i]);
//          }
//          else
//          {
//              while(s1.empty()==false)
//              {
//              ans=ans+s1.top();
//              s1.pop();
//          }
//          ans=ans+'.';
//          }
//      }
//      while(s1.empty()==false)
//      {
//          ans=ans+s1.top();
//          s1.pop();
//      }
//      return ans;
//     } 