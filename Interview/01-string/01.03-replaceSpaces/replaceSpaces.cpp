#include <string>

using std::string;

class Solution{
public:
    string replaceSpaces(string S, int length){
        string res = "";
         
        for (int i = 0; i < length; ++i)
        {
            if (S[i] != ' ')
                res.push_back(S[i]);
            else
                res.append("%20");
        }
        return res;
    }
};