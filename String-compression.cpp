#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compress(vector<char>& chars) {
        string ans;
        int count{0};
        char now, pre;
        string num;
        int length=chars.size();
        for(int i=1;i<length;i++)
        {
            pre = chars.at(i-1);
            now = chars.at(i);
            if(pre==now)
            {
                count++;
                continue;
            }

            else
            {
                ans.push_back(pre);
                if(count !=0)
                {
                    count++;
                    num = to_string(count);
                    ans+=num;
                }
                count=0;
            }
        }

        if(pre==now)
        {
            ans.push_back(pre);
            count++;
            num = to_string(count);
            ans+=num;
        }

        else
        {
            ans.push_back(now);
        }
        return ans.length();
    }
int main()
{
    vector<char> chars={'a','a','a','b'};
    cout<<compress(chars);
}