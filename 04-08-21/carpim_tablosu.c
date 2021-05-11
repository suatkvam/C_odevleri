#include <stdio.h>

int main()
{
	
	int carpan;
    int carpilan=0;
    int tbl=0;
	
	for(carpan=1; carpan<= 18;carpan++)
    {
		tbl++;
		printf("tablo: %d\n",tbl);
		for(carpilan=1; carpilan <= 18; carpilan++)
        {		
			printf("%d * %d = %d\n",carpan, carpilan, carpan * carpilan);
		}	
		printf("\n");
	}	
}