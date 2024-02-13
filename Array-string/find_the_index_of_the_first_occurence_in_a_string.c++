class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int j = 0;
        int count = 0;
        int i = 0;
        while (i < haystack.length())
        {
            if (haystack[i++] == needle[j++])
            {
                count++;
            }
            else
            {
                i = i - j + 1;
                j = 0;
                count = 0;
            }
            if (count == needle.length())
                return (i - j);
        }
        return -1;
    }
};