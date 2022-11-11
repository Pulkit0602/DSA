#include<iostream>
using namespace std;


bool isValid(char ch)
{
    if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char toLower(char ch)
{
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9') )
    {
        return ch;
    }
    else
    {
        return ch -'A' + 'a';
    }
}

bool CheckPalindrome(string s)
{
    string temp;
    for (int i = 0 ; i<=s.length() ; i++)
    {
        if(isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
        
    }

    for (int i = 0 ; i<=temp.length() ; i++)
    {
        temp[i] = toLower(temp[i]);        
    }

    int start = 0;
    int end = temp.length()-1;    
    while(start<=end)
    {
        if(temp[start] != temp[end])
        {
            return 1;
        }        
        start ++;
        end --;
    }
    return 0;
} 


int main()
{
    string name;
    cout<<"Enter the name"<<endl;
    cin>>name;  
    
    int req = CheckPalindrome(name);
    if (req==0)
    {
        cout<<"Is Palindrome "<<endl;
    }
    else
    {
        cout<<"Not Palindrome "<<endl;
    }
}