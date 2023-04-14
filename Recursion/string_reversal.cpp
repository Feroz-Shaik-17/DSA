#include<iostream>
using namespace std;

void string_reverse(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    string_reverse(ros);
    cout<<s[0];
}
int main()
{
    string_reverse("feroz");
    return 0;
}