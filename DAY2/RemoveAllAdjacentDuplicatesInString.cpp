#include<iostream>
using namespace std;
string removeDuplicates(string s1) 
{
    string s2 = "";
    bool repeat = 1;
    while(repeat == 1 || s1.length()==0)
    {
        int i = 0 , count = 0;
        while(i < s1.length()-1)
        {
            cout<<s1[i]<<" "<<s1[i+1]<<endl;
            if(s1[i] == s1[i+1] )
            {
                i = i+2;
                count++;
            }
            else
            { 
                cout<<i<<endl;
                s2.push_back(s1[i]);
                i++;
            }
        }
        if(s1[s1.length()-1]!=s1[s1.length()-2])
        {
            cout<<s1[i]<<" "<<s1[i+1]<<endl;
            cout<<"Hola"<<endl;
            s2.push_back(s1[s1.length()-1]);
        }        
        cout<<"count: "<<count<<endl;
        cout<<"----------------"<<s2<<endl;;

        s1=s2;        
        s2="";
        cout<<"#########"<<s1<<endl;
        if(count==0)
        {
            cout<<"Hey"<<endl;
            repeat = 0;
            return s1;            
        }
    }
    return s1;
}

int main()
{
    string s1 = "aaaaaaaa";
    cout<<"Let's Start: "<<endl;
    string ans = removeDuplicates(s1);
    cout<<"Required: "<<ans<<endl;
}