#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string ans = "";
        int i = 0;
        while(i < n) {
            char cur_char = chars[i];
            ans += cur_char;
            int c = 0;
            while(i < n && chars[i] == cur_char) {
                i++;
                c++;
            }
            if(c > 1) ans += to_string(c);
        }
        chars.clear();
        for(char c : ans) {
            chars.push_back(c);
        }
        return chars.size();


        /*
        // if chars are consicutuive
        int n = chars.size();
        vector<int> ch(26, 0);
        for(int i = 0; i < n; i++) {
            ch[chars[i] - 'a']++;
        }
        string ans = "";
        for(int i = 0; i < 26; i++) {
            if(ch[i] > 1) {
                ans += (char)(i + 'a');
                ans += to_string(ch[i]);
            }
            else if(ch[i] == 1) {
                ans += (char)(i + 'a');
            }
        }
        chars.clear();
        for(char c : ans) {
            chars.push_back(c);
        }
        return chars.size();
        */
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<char> chars;
    Solution sol;
    char c;
    while(cin >> c) {
    	chars.push_back(c);
    	if(cin.get() == '\n') break;
    }
    cout << sol.compress(chars);
    return 0;
}
    