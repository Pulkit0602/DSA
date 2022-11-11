#include<iostream>
using namespace std;

bool CheckPalindrome(char name[] , int length)
{
    int start = 0;
    int end = length-1;    
    while(start<=end)
    {
        if(name[start] != name[end])
        {
            return 1;
        }        
        start ++;
        end --;
    }
    return 0;
} 

int getLength(char name[])
{
    int count = 0;
    for (int i=0 ; name[i]!='\0' ;i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter the name"<<endl;
    cin>>name;    
    int ans = getLength(name);
    int req = CheckPalindrome(name ,ans);
    if (req==0)
    {
        cout<<"Is Palindrome "<<endl;
    }
    else
    {
        cout<<"Not Palindrome "<<endl;
    }
}