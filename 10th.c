#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *file;
char equipments[100];
int i;
file = fopen("TableTennis.TXT", "w");
if(file==NULL)
{
printf("\n The file could not be opened");
exit(1);
}
fprintf(file,"Paddles\nTable Tennis Balls\nNet and Posts\nTable\nRubber covers\nShoes\nUnifrorm\nTowel\nShirt\nShort\n");
printf("\n Rquesting to add new equpiment for Table Tennis: ");
gets(equipments);
fflush(stdin);
fprintf(file,"New Equipment: ");
fputs(equipments, file);
fclose(file);
return 0;
}