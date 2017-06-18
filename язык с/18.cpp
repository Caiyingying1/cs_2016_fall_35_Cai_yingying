#include <stdio.h>

int Copy_File(char* in_path,char* out_path)
{
	FILE* in=NULL;
	FILE* out=NULL;

if((in=fopen(in_path,"rb"))==NULL)
	{
		printf("can not open dile!\n");
		return(1);
	}

	if((out=fopen(out_path,"wb+"))==NULL)
	{
		printf("can not creat file !\n");
		fclose(in);
		return(1);
	}

	char data;

	while(!feof(in))
	{
		if(1==fread(&data,sizeof(char),1,in))
			fwrite(&data,sizeof(char),1,out);
	}

	fclose(in);
	fclose(out);
		
	return(0);
}

int main()
{
	char in_path[256];
	char out_path[256];

printf("input primary file's location: ");
	scanf("%s",in_path);

	printf("input present file's location: ");
	scanf("%s",out_path);

	if(Copy_File(in_path,out_path))
	{
		printf("copy fail !");
	}else
		printf("copy succeed !");

	return(0);
}
