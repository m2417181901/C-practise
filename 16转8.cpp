#include <iostream>
#include<stdlib.h>
using namespace std; 
int val(char * hex)
{
     long long int n = 0;
    while (*hex != ' ')
    {
        if  (*hex >= 'A' && *hex <= 'F')
        {
            n *= 16;
            n += *hex - 'A' + 10;
		
        }
        else if(*hex >= 'a' && *hex <= 'f')
        {
            n *= 16;
            n += *hex - 'a' + 10; 
        }
        else if(*hex >= '0' && *hex <= '9')
        {
            n *= 16;
            n += *hex - '0'; 
        }
        else
        break;
		hex++;
    }
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
	{
	char input[1000001];
    cin>>input;
    long long int v = val(input);
    char oct[1000000001];
    itoa(v, oct, 8);
  	cout<<oct<<endl;
	}
    return 0;
}  
