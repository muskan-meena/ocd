ques 1 (isomorphic string)
TC=O(n)
SC=O(n)
        
class solution{
public:
    bool isIsomorphic(string s, string t) {
      if (s.length() != t.length())
        return false;
      unordered_map<char, char>mapST;
      unordered_map<char, char>mapTS;
     for( i=0; i<s.length(); i++)
{    
        if(mapST.find(s[i]) != mapST.end()){
            if(mapST[s[i]] != t[i])
{        
                  return false;
            }
  }
        else {
           mapST[s[i]] =t[i];
        }
      if(mapTS.find(t[i]) != mapTS.end()){
         if(mapTS[t[i]] != s[i])
{     
        return false;
}
      }
        else {
          mapTS[t[i]] = s[i];
        }
}
   return true;
    }


ques 2 ( remove outermost parentheses)
TC=O(n)
SC=O(n)

class solution (
public:
    string removeOuterParentheses(string s){
       int count = 0;
       string result = "";

      for (char c : s){
           if (c=='('){
               if (count>0){
                   result += c;
               }
                count++;
           }
             eise if (c == ')'){
                count--;
                if (count > 0) {
                result += c;
                }
             }
      }
        return result;
}
