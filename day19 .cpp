ques1( )
TC=O(n)
SC=O(1)
using namespace std;

int maxDepth(string s) {
    int max_depth = 0, current_depth = 0;
    
    for (char ch : s) {
        if (ch == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (ch == ')') {
            current_depth--;
        }
    }
    
    return max_depth;
}



ques 2 ( )
TC=O(n)
SC=O(1)

using namespace std;

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