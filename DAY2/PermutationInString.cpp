#include<iostream>
using namespace std;


bool checkSimilarity(int char1[],int char2[])
{
    for (int i=0 ; i<26 ; i++)
    {
        if(char1[i]!=char2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    if(s2.length() < s1.length())
    {
        return 0;
    }

    //focus on string 1
    int char1[26] = {0};
    for (int i=0 ; i<s1.length() ; i++)
    {
        int index = s1[i] - 'a';
        char1[index]++;
    }

    //String2;
    int step = 0;
    while(step<= s2.length()-s1.length())
    {
        cout<<"step: "<<step<<endl;
        int char2[26] = {0};
        for (int j=0 ; j<s1.length() ; j++)
        {
            cout<<"char: "<<s2[step+j]<<endl;
            int index = s2[step+j] - 'a';
            char2[index]++;
        }
        if (checkSimilarity(char1,char2))
        {
            return 1;
        }
        step++;
    }
    return 0;
}

int main()
{
    string s1 = "ab";
    string s2 = "a";
    cout<<"Let's Start "<<endl;
    int ans =  checkInclusion(s1 , s2);
    if(ans == 1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}