class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> freq_rans(26, 0);
        vector<int> freq_mag(26, 0);

        for (char c : ransomNote)
        {
            freq_rans[c - 'a']++;
        }

        for (char c : magazine)
        {
            freq_mag[c - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq_rans[i] > freq_mag[i])
            {
                return false;
            }
        }

        return true;
    }
};