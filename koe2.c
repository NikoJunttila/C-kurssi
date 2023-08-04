/****************************************************************
*
* File   : koe2.c
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

int main() {
  // Luodaan taulukko vuosikymmenien ja väkilukujen tiedoille
int vakiluku[17][2] = {
{1750,600000},
{1800,900000},
{1850,1200000},
{1900,1600000},
{1950,2200000},
{1960 ,3000000},
{1970,3800000},
{1980,4500000},
{1990,5500000},
{2000,6100000},
{2010,6800000},};
int i,j;
for(i=0;i<11;i++){
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[i][0],vakiluku[i][1]);
}
int vuosiluku,index;
printf("etsi vuosiluvun perusteella maapallon vaestontiheys \n");
printf("anna taulukossa oleva vuosiluku \n");
scanf("%d",&vuosiluku);

for(j=0;j<11;j++){
	if(vuosiluku == vakiluku[j][0]){
		index = j;
	}
}
double pinta_ala = 510100;
double tiheys = vakiluku[index][1]/pinta_ala;
printf("maapallon vaestontiheys vuonna %d oli %.2f",vakiluku[index][0],tiheys);




  return 0;
}
