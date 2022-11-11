#include<iostream>
using namespace std;

bool isSpace(char ch)
{
    //if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
    if (ch =='@')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void reverseString(char s[])
{
    int count = 0; 
    for( int i=0 ; i<13 ; i++)
    {        
        
        if( isSpace(s[i]))       
        {
            
            int substart = count;
            int subend = i-1;
            
            while(substart<=subend)
            {
                
                swap(s[substart],s[subend]);
                substart ++;
                subend --;                
            }
            count = i+1;

        }
    }    
} 

int main()
{
    char s[25] = {'n','a','m','e',' ','i','s',' ','P','u','l','k','i','t'};
    reverseString(s);
    cout<<"Array: "<<s<<endl;

}