#include<iostream>
using namespace std;

bool checkSpace(char ch)
{
    if (ch == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string removeSpace(string s)
{
    string ans = "";
    for (int i=0 ; i<s.length() ; i++)
    {
        if (checkSpace(s[i]))
        {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s = "Pulkit studies in IITP";
    cout<<s<<endl;
    string alpha = removeSpace(s);
    cout<<"Required ans: "<<alpha<<endl;
}