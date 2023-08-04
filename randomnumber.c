/****************************************************************
*
* File   : randomnumber.c
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

int main(){
    int i,random,total;
    srand(time(NULL));
    for ( i= 0; i < 100; i++)
    {
    	random = rand() % 7;
    	printf("%d %d. \n",i,random);
    	total += random;
	}
	float avg = total;
	printf("total = %d \n",total);
	printf("average number = %f",avg/100);
    return 0;
}
