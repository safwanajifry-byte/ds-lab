#include<stdio.h>
void main()
{
int i,j,k,a[2][3][2];
printf("enter 12 values:\n");
for( int i=0;i<=2;i++)
{
for( int j=0;j<3;j++)
{
for( int k=0;k<2;k++)
{
scanf("%d",&a[i][j][k]);
}
printf("\ndisplaying values:\n");

for(int i=0;i<2;i++)
{
 for( int j=0;j<3;j++)
{
for( int k=0;k<2;++k)
{
printf("a[%d][%d][%d]=%d\n",i,j,k,a[i][j][k]);
}
}
}
return 0;
}

