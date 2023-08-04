/****************************************************************
*
* File   : koe1.c
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
int looping = 1;

while(looping){
		printf("enter number to continue \n");
	printf("1 = Tulostaa 5 erilaista satunnaislukua väliltä 1 - 20.\n");
	printf("2 = Tulostaa nimeasi silmukassa annetun kertamäärän (kertamaaraa kysytaan).\n");
	printf("0 => poistu \n");
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

int j,b;
printf("tulosta nimeni annetun luvun verran \n");
	scanf("%d", &b);
for(j=0;j<b;j++){
	printf("Niko Junttila\n");
}	
}

void randomz(int vitone){
	int i,random;
		for(i= 0;i<vitone;i++){
				random = rand() % 20 + 1;
				printf("%d \n",random);
			}
}
