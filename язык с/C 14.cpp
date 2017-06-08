#include<stdio.h>  
       
void Swap(char *a,char *b)  
{  
    char temp = *a;  
    *a = *b;  
    *b = temp;  
}  
       

void Reverse(char *str,char *begin,char *end)  
{  
    if(str==NULL || begin==NULL || end==NULL)  
        return;  
       
    while(begin < end)  
    {  
        Swap(begin,end);  
        begin++;  
        end--;  
    }  
}  
       

void ReverseSentence(char *str)  
{  
    if(str == NULL)  
        return;  
       
    char *begin = str;  
    char *end = str;  
    while(*end != '\0')  
        end++;  
    end--;  
      
    Reverse(str,begin,end);  
       
    
    begin = str;  
    while(*begin == ' ')  
        begin++;  
    end = begin;  
    while(*begin != '\0')  
    {  
        while(*end!=' ' && *end!='\0')  
            end++;  
        end--;  
        Reverse(str,begin,end);  
       
         
        end++;  
        while(*end == ' ')  
            end++;  
        begin = end;  
    }  
}  
       
int main()  
{  
    char str[50000];  
    while(gets(str) != NULL)  
    {  
        ReverseSentence(str);  
        puts(str);  
    }  
    return 0;  
}
