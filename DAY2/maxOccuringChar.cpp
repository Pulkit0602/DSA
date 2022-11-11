#include<iostream>
using namespace std;


char getMAXchar(string s)
{
    char arr[26] = {0};
    for( int i=0 ; i<s.length() ; i++)  
    {        
        int num =0;
        if (s[i]>='a' && s[i]<='z')
        {
            num = s[i] - 'a';            
            arr[num]++;
        }
        else
        {
            num = s[i] - 'A';
            arr[num]++;
        }
    }

    int maxi =-1 , ans = 0;
    for ( int i=0 ; i<26 ;i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans ;
    return finalans;

} 

int main()
{
    string s = "Pulkitt";
    cout<<s<<endl;
    char ans = getMAXchar(s); 
    cout<<"Array: "<<ans<<endl;

}