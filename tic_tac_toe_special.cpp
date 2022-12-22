#include <stdio.h>
#include <windows.h>
#include <string.h>
void mapprint(int data[3][3]);
int main()
{
	int map[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	char input_str[100000];
	int width;
	int length;
	int count=0;
	int nine=0;
	int masterkey = 0;
	printf("'¼¼·Î  °¡·Î' ÇüÅÂ·Î ÀÔ·Â\nÀÌÇØÇß´Ù¸éokayÀÔ·Â");
	while(1)
	{
	scanf("%s",input_str);
		if(strcmp(input_str,"okay")==0)
		{
		break;	
		}
		if(strcmp(input_str,"okayo")==0)
		{
		masterkey = 1;
		break;	
		}
		if(strcmp(input_str,"okayx")==0)
		{
		masterkey = 2;
		break;
		}
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("¸Ê ¸ð¾ç(Âü°í)\n");
	printf("   2 1 0\n   £þ£þ£þ\n");
	printf("2| 0 0 0\n");
	printf("1| 0 0 0\n");
	printf("0| 0 0 0\n");
	while(1)
	{ 
		if(nine == 9)
		{
			
		if(masterkey == 0)
		{	
			if(map[2][2] == 1&&map[2][1] == 1&&map[2][0] == 1||map[1][2] == 1&&map[1][1] == 1&&map[1][0] == 1||map[0][2] == 1&&map[0][1] == 1&&map[0][0] == 1||map[2][2] == 1&&map[1][2] == 1&&map[0][2] == 1||map[2][1] == 1&&map[1][1] == 1&&map[0][1] == 1||map[2][0] == 1&&map[1][0] == 1&&map[0][0] == 1||map[2][2] == 1&&map[1][1] == 1&&map[0][0] == 1||map[2][0] == 1&&map[1][1] == 1&&map[0][2] == 1)
		{
		printf(" x ½Â¸®!");	
		break;
		} 
		if(map[2][2] == 2&&map[2][1] == 2&&map[2][0] == 2||map[1][2] == 2&&map[1][1] == 2&&map[1][0] == 2||map[0][2] == 2&&map[0][1] == 2&&map[0][0] == 2||map[2][2] == 2&&map[1][2] == 2&&map[0][2] == 2||map[2][1] == 2&&map[1][1] == 2&&map[0][1] == 2||map[2][0] == 2&&map[1][0] == 2&&map[0][0] == 2||map[2][2] == 2&&map[1][1] == 2&&map[0][0] == 2||map[2][0] == 2&&map[1][1] == 2&&map[0][2] == 2)
		{
		printf(" o ½Â¸®!");	
		break;
		} 
		else
		{
		printf("¹«½ÂºÎ");
		break;
		}
		}
		if(masterkey == 1)
		{
			printf(" o ½Â¸®!");	
			break;
		}
		if(masterkey == 2)
		{
			printf(" x ½Â¸®!");	
			break;
		}
		}
		if(nine<9)
		{
			scanf("%d %d",&width,&length);
			if(map[width][length] == 0)
			{
			if(count % 2 == 1)
			{
				
				map[width][length] = 1;
				count++;
			
			}
			else if(count % 2 == 0)
			{
				map[width][length] = 2;
				count++;
			}
			mapprint(map);
			nine++;
			}
			else if(map[width][length] > 0)
			{
				Sleep(1000);
			printf("?\n");	
				Sleep(1000);
			printf("´Ù½Ã¾²¼¼¿ä!\n");
			}
			if(map[2][2] == 1&&map[2][1] == 1&&map[2][0] == 1||map[1][2] == 1&&map[1][1] == 1&&map[1][0] == 1||map[0][2] == 1&&map[0][1] == 1&&map[0][0] == 1||map[2][2] == 1&&map[1][2] == 1&&map[0][2] == 1||map[2][1] == 1&&map[1][1] == 1&&map[0][1] == 1||map[2][0] == 1&&map[1][0] == 1&&map[0][0] == 1||map[2][2] == 1&&map[1][1] == 1&&map[0][0] == 1||map[2][0] == 1&&map[1][1] == 1&&map[0][2] == 1)
		{
				if(masterkey == 1)
		{
			printf(" o ½Â¸®!");	
			break;
		}
		if(masterkey == 2)
		{
			printf(" x ½Â¸®!");	
			break;
		}
		printf(" x ½Â¸®!");
		break;	
		} 
		if(map[2][2] == 2&&map[2][1] == 2&&map[2][0] == 2||map[1][2] == 2&&map[1][1] == 2&&map[1][0] == 2||map[0][2] == 2&&map[0][1] == 2&&map[0][0] == 2||map[2][2] == 2&&map[1][2] == 2&&map[0][2] == 2||map[2][1] == 2&&map[1][1] == 2&&map[0][1] == 2||map[2][0] == 2&&map[1][0] == 2&&map[0][0] == 2||map[2][2] == 2&&map[1][1] == 2&&map[0][0] == 2||map[2][0] == 2&&map[1][1] == 2&&map[0][2] == 2)
		{
				if(masterkey == 1)
		{
			printf(" o ½Â¸®!");	
			break;
		}
		if(masterkey == 2)
		{
			printf(" x ½Â¸®!");	
			break;
		}
		printf(" o ½Â¸®!");	
		break;
		}
		 
		}
	}
}
void mapprint(int data[3][3])
{
	int k=2;
	printf("   2 1 0\n   £þ£þ£þ\n");
		for(int i = 2;i > -1;i--)
	{
		printf("%d| ",k);
			for(int j = 2;j > -1;j--)
		{
		if(data[i][j] == 1)
		{
		printf("X ");
		}
		else if(data[i][j] == 2)
		{
		printf("O ");
		}
		else if(data[i][j] == 0)
		{
		printf("  ");
		}
		}
	printf("\n");
	k--;
	}
}
