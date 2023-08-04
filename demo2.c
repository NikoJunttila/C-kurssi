/****************************************************************
*
* File   : demo2.c
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
#include <stdbool.h>


void randomz(int vitone);
void sarjaaa(void);

int main(){
srand(time(NULL));	
int looping = 1;

while(looping){
		printf("enter number to continue \n");
	printf("1 => kutsu funktio joka heittaa noppaa 5x\n");
	printf("2 => kutsutaan funktiota, joka tulostaa sarjaa 0.01, 0.03, 0.05, ... 50 kpl (50 jäsentä)\n");
	printf("0 => Exit \n");
	int a;
	scanf("%d", &a);
		switch(a){
		case 1:
		randomz(5);
			break;
		case 2:
		sarjaaa();
			break;
		case 0:
			looping = 0;
			break;
}
}
	return 0;
}
void sarjaaa(void){
int j;
double nollapiste1 = 0.01;
for(j=0;j<50;j++){
	printf("%.2f \n",nollapiste1);
	nollapiste1 += 0.02;
	
}	
}

void randomz(int vitone){
	int i,random;
		for(i= 0;i<vitone;i++){
				random = rand() % 50 + 5;
				printf("%d \n",random);
			}
}
