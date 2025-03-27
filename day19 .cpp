ques1(maximum nesting depth of the parentheses )
TC=O(n)
SC=O(1)

class solution{
public:
int maxDepth(string s) {
    int depth = 0, max_depth = 0;
    for (int i = 0; i < s.length(); i++ ) {
        if (s[i] == '(') {
            depth++;
            max_depth = max(max_depth,depth);
        } else if (s[i] == ')') {
             depth--;
        }
    }
    
    return max_depth;
  }
};

ques 2 (romen to integer )
TC=O(n)
SC=O(1)
class solution {
public:
int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; --i) {
        int currValue = romanValues[s[i]];

        if (currValue < prevValue) {
            total -= currValue;
        } else {
            total += currValue;
        }

        prevValue = currValue;
    }

    return total;
}
