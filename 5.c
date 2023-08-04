/****************************************************************
*
* File   : 5.c
* Author : NikoJunttila <89527972+NikoJunttila@users.noreply.github.com>
* 
*
* Copyright (C) 2022 Centria University of Applied Sciences.
* All rights reserved.
*
* Unauthorized copying of this file, via any medium is strictly
* prohibited.
*
****************************************************************/







#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char *countries[20][6] = {
{"Norway","14","7","8","29","1"},
{"Germany","10","7","5","22","3"},
{"United States of America","8","8","5","21","4"},
{"Sweden","7","4","4","15","9"},
{"People's Republic of China","7","4","2","13","11"},
{"Austria","6","7","4","17","6"},
{"Netherlands","6","5","4","15","9"},
{"Switzerland","6","1","5","12","13"},
{"ROC","4","8","12","24","2"},
{"France","4","7","2","13","11"},
{"Canada","4","5","11","20","5"},
{"Japan","3","5","8","16","7"},
{"Italy","2","7","7","16","7"},
{"Republic of Korea","2","4","1","7","14"},
{"Slovenia","2","3","2","7","14"},
{"Finland","1","2","3","6","16"},
{"Australia","1","2","1","4","17"},
{"New Zealand","1","1","0","2","19"},
{"Hungary","1","0","2","3","18"},
{"Czech Republic","1","0","1","2","19"},
};
int i;
int first,second,third,total;
int order;
for(i=0;i<20;i++){
printf("Name: %s  ",countries[i][0]);
first = atoi(countries[i][1]);
second = atoi(countries[i][2]);
third = atoi(countries[i][3]);
total = atoi(countries[i][4]);
order = atoi(countries[i][5]);
printf("medals gold: %d silver: %d bronze: %d total: %d ranking: %d \n ",first,second,third,total,order);
}
char *maa[30];
printf("search for single country: \n");
gets(*maa);
int j,total2;
for(j=0;j<20;j++){
	if(strcmp(countries[j][0],*maa) == 0){
	total2 = atoi(countries[j][4]);
	printf("country %s has %d medals",countries[j][0],total2);
	break;
}
if(j==19)
printf("no countries found with this name");
}
return 0;
}
