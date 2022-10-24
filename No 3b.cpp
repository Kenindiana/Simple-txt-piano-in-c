#include<stdio.h>
#include<windows.h>
int main()
{
	int nada;
	FILE *note=fopen("note.txt","r");
	while(!feof(note))
	{
		fscanf(note,"%d ",&nada);
		if(nada == 1)
		{
			Beep(251,1000);
			printf("%d ",nada);
		}else if(nada == 2)
		{
			Beep(280,1000);
			printf("%d ",nada);
		}else if(nada == 3)
		{
			Beep(320,1000);
			printf("%d ",nada);
		}else if(nada == 4)
		{
			Beep(341,1000);
			printf("%d ",nada);
		}else if(nada == 5)
		{
			Beep(384,1000);
			printf("%d ",nada);
		}else if(nada == 6)
		{
			Beep(427,1000);
			printf("%d ",nada);
		}else if(nada == 7)
		{
			Beep(480,1000);
			printf("%d ",nada);
		}else if(nada == 8)
		{
			Beep(512,1000);
			printf("%d ",nada);
		}
	}
	return 0;
}
