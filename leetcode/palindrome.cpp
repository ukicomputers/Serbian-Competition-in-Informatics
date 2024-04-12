class Solution {
public:
    bool isPalindrome(int x) {
        string brj = to_string(x);
        int i = 0;

        for(auto it = brj.rbegin(); it != brj.rend(); ++it) {
            if(*it != brj[i])
                return false;
            i++;
        }

        return true;
    }
};