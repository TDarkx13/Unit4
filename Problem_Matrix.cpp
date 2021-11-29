#include <stdio.h>

int RG=0, CL=0;
int RadMatrix(int i, int j, int x, int y);
int DispMatrix(int i, int j, int x, int y);
int PrintMatrix(int i, int j);

int main()
{   
    
    int i, j, x, y, ch;
    int Matrix[100][100];
    RadMatrix(i, j, x, y);
    PrintMatrix(i, j);
    
	do{
    {
    printf("\nPress 1 for the column or press 2 for the row.");
    do{
    scanf("%d", &x);
    if(x != 1 && x != 2)
    printf("Invalid option, try again.");
    }while(x != 1 && x != 2);
    
	printf("Select one number:");
    do{
    scanf("%d", &y);
    if(y != 1 && y != 2 && y != 0)
    printf("Invalid option, try again.");
     }while(y != 1 && y != 2 && y != 0);
    
	DispMatrix(i, j, x, y);
    }
    
	printf("\nPress S to repeat or press N to exit.\n");
    do{ 
    scanf(" %c", &ch);
    getchar();
    if (ch != 'S' && ch != 'N')
    printf("Invalid option, try again.");
    }while(ch != 'S' && ch != 'N');
    
    }while(ch == 'S');
    
    printf("%d, %d", CL, RG);
    
}

int RadMatrix(int i, int j, int x, int y)
{
    int Matrix[100][100];
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    } 
}

int DispMatrix(int i, int j, int x, int y)
  
{ 
    int Matrix[100][100];
{
    if (x==1)
    {
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {   if (j == y)
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
        
        
    }
    CL++;
    }
    else
    {
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {   if (i == y)
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
        
        
    }
    RG++;
    }
  
    
    
}
}

int PrintMatrix(int i, int j)
{
int Matrix[100][100];
for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

}
