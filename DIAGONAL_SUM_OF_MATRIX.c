#include <stdio.h>
void main()
{
  int a[3][3],i,j,sum=0;
  printf("Enter the 3x3 matrix elements :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }
  printf("\nThe matrix is : \n\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
      printf("\n\n");
  }
  for(i=0;i<3;i++)
  	{
   		sum=sum+a[i][i];
  	}
  printf("The Sum of Diagonal Elements of the Matrix = %d",sum);
}
