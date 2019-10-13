#include <stdio.h>

int main()
{char line1[50];/*line of input*/
char line2[50];/*line of input*/
float marks[20];
int i;
char sub[20];/*all subjects in this semester */
int credit[20];/*credits of each subject*/
float cgpa=0;
float total=0;/*sum of marks of each*/
printf("enter subjects\n");
fgets(line1,sizeof(line1),stdin);
sscanf(line1,"%c%c%c%c%c%c%c%c%c%c",&sub[0],&sub[1],&sub[2],&sub[3],&sub[4],&sub[5],&sub[6],&sub[7],&sub[8],&sub[9]);
printf("%c",sub[0]);
printf("enter marks of each subject\n");
    fgets(line2,sizeof(line2),stdin);
sscanf(line2,"%f%f%f%f%F%f%f%f%f%f",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4],&marks[5],&marks[6],&marks[7],&marks[8],&marks[9]);

for(i=0;i<10;i++)
{   total+=marks[i];
    
}
printf("enter credit of each subject");
fgets(line,sizeof(line),stdin);
sscanf(line,"%d%d%d%d%d%d%d%d%d%d",&credit[])

    return 0;
}
