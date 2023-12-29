#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
        string s;
        char curr = chars[0];
        int count = 0;
        for (char c : chars) {
            if (c == curr) {
                count++;
            } else {
                s+=curr;
                if (count != 1) {
                    s+= to_string(count);
                }
                curr = c;
                count = 1;
            }
        }
        s+=curr;
        if (count != 1) {
            s+= to_string(count);
        }
        chars.clear();
        for (char c : s) {
            chars.push_back(c);
        }
    return chars.size();
}


int main()
{
    vector<char> chars={'a','a','a','b'};
    cout<<compress(chars);
}