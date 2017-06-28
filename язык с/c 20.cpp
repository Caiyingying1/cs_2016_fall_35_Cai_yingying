#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 
int main()
{     FILE *fp,*fp1;
       char ch, ni[81], srcfile[21];
       char mi[5]={'C','H','I','N','A'};                     
       int i;
       printf("please input a file name:");
    gets(srcfile);                                                 
       printf("please input a string(< 80 chars):");
    gets(ni);                                                       
 
       if((fp = fopen(srcfile, "w")) == NULL)        
    {   printf("open file error\n");                       
         exit(0);
    }
 
       i=0;
       while((ch=ni[i])!='\0'){                              
              ch=ch^mi[i%5];                                 
              fputc(ch,fp);                                      
              i++;
       }
       fclose(fp);                                                
 
       if((fp1 = fopen(srcfile, "r")) == NULL)       
    {   printf("open file error\n");                   
         exit(0);
    }
       i=0;
       while((ch = fgetc(fp1)) !=EOF){               
              ch=ch^mi[i%5];                                 
              printf("%c",ch);                               
              i++;
       }
       fclose(fp1);                                              
       printf("\n");
 
    return(0);
}
