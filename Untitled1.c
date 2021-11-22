#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], result;
    int i,len,max =-1,freq[256]={0};
    printf("Enter any string:");
    gets(str);
    len= strlen(str);
    for(i=0; i<len;i++)
    {
        freq[str[i]]++;
    }
    for(i=0; i<len;i++)
    {

        if(max<freq[str[i]])
        {
            max=freq[str[i]];
            result =str[i];

        }
    }
    printf("Result: %c",result);
}
