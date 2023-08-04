/****************************************************************
*
* File   : eka.c
* Author : NikoJunttila <89527972+NikoJunttila@users.noreply.github.com>
* 
*
* Copyright (C) 2022-2023 Centria University of Applied Sciences.
* All rights reserved.
*
* Unauthorized copying of this file, via any medium is strictly
* prohibited.
*
****************************************************************/

/* 
#include <stdio.h>
#include <stdlib.h> */

void intTaulu(int koko);

int main(){
int number;
printf("enter a number that is 20 or more: ");
scanf("%d", &number);
if(number < 20){
printf("for realz pls enter number that is 20 or more \n");
scanf("%d", &number);
}
while(number < 20){
	printf("enter a number that is 20 or more ");
scanf("%d", &number);
}
intTaulu(number);
	return 0;
}

void intTaulu(int koko){
	int i,j,random,maxi;
	double total;
	int taulukko[koko];
	//tehd��n taulukko jossa random numeroita N verran
	for(i=0; i<=koko;i++){ 
		random = rand() % 1000 + 1;
		taulukko[i] = random;
		total += taulukko[i]; //plussataan kaikki yhteen
		printf("%d. %d\n",i,taulukko[i]);
		if(maxi<taulukko[i]){
		maxi = taulukko[i]; //etit��n isoin luku
	}		
}
//v��rin p�in looppaus
printf("lopusta alkuun looppi \n");
for(j=koko;j>=0;j--){
	printf("%d. %d\n",j,taulukko[j]);
}
printf("suurin luku on %d \n",maxi);
printf("keskiarvo on %f",total/koko);
}

