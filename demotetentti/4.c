/****************************************************************
*
* File   : 4.c
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
#include<stdbool.h>

int main(){
	int pienin,suurin,avg,total;
	int user;
	while(true){
		printf("give number. 0 to stop \n");
		scanf("%d",&user);
		if(user == 0){
			break;
		}
		avg += 1;
		total += user;
		if(avg==1){
		pienin = user;
		}
		if(user>suurin){
		suurin = user;	
		}
		if (user<pienin){
		pienin = user;
		}
	}
printf("pienin: %d \n",pienin);
printf("suurin: %d \n",suurin);
printf("yhteensa: %d \n",total);
printf("keskiarvo: %d \n",total/avg);
	return 0;
}
