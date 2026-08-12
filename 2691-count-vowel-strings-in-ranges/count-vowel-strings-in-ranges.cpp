class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();

        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            char first = words[i][0];
            char last = words[i].back();

            bool startVowel = (first == 'a' || first == 'e' || first == 'i' ||
                                first == 'o' || first == 'u');

            bool endVowel = (last == 'a' || last == 'e' || last == 'i' ||
                             last == 'o' || last == 'u');

            prefix[i + 1] = prefix[i] + (startVowel && endVowel);
        }

        vector<int> ans;

        for (auto query : queries) {
            int l = query[0];
            int r = query[1];

            ans.push_back(prefix[r + 1] - prefix[l]);
        }

        return ans;
    }
};