#include<iostream>
using namespace std;

string Duplicate(string s)
{
    if(s.length() == 0){
        return "";
    }

    char ch = s[0];
    string ans = Duplicate(s.substr(1));

    if(ch == ans[0])
    {
        return ans;
    }
    return ch+ans;
}
int main()
{
    cout<< Duplicate("aaaaabbbbbcccdeee");
    return 0;
}