#include<stdio.h>
int main()
{
	int mnth;
	scanf("%d",&mnth);
	
		switch (mnth)
	{
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("days-31");
		break;
		case 2:printf("days28/29");
		break;
		case 4:
		case 6:
		case 9:
		case 11:printf("days-30");
		break;
		
	}

return 0;
}

