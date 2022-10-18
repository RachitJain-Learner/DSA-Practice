class Solution {
public:
    string countAndSay(int n) {
     
        if(n==1)return "1";
        if(n==2)return "11";
        string s = "11";
        for(int i=3 ; i <=n;i++)
        {
            string temp = "";
            s+="$"; // to check the last character as well
            int count = 1;
            for(int j=1;j<s.size();j++)
            {
                if(s[j]!=s[j-1])
                {
                    temp += to_string(count); //first add the count
                    temp += s[j-1];  // then add the number
                    count = 1;
                }
                else count++;
            }
            
            s = temp;
            
        }
        
        return s;
        
    }
};
