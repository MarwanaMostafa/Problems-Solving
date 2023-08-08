class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayLen = haystack.length();
        int needleLen = needle.length();


        if (hayLen < needleLen) {
            return -1;
        }

        for (int i = 0; i <= hayLen - needleLen; ++i) {
            int j;
            for (j = 0; j < needleLen; ++j) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needleLen) {
                return i;
            }
        }

        return -1;
    }
};
