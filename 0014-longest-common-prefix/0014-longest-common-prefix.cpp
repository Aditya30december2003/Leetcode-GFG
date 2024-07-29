class Solution {
private:
    string Common(string str1, string str2) {
        int index = 0;
        string ans;
        while (index < str1.size() && index < str2.size()) {
            if (str1[index] == str2[index]) {
                ans += str1[index];
            } else {
                break;
            }
            index++;
        }
        return ans;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Return empty string if input is empty

        string ans = strs[0]; // Initialize with the first string

        for (int i = 1; i < strs.size(); i++) {
            ans = Common(ans, strs[i]);
            if (ans.empty()) break; // Early exit if there is no common prefix
        }

        return ans;
    }
};
