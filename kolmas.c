/****************************************************************
*
* File   : kolmas.c
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


int main(){
int vakiluku[17][2] = {
{1900,2655900},
{1910,2943400},
{1920,3147600},
{1930,3462700},
{1940,3695617},
{1950,4029803},
{1960,4446222},
{1970,4598336},
{1980,4787778},
{1990,4998478},
{2000,5181115},
{2010,5378165},
{2020,5635938},
{2030,5850097},
{2040,5985356},
{2050,6090038},
{2060,6213048},
};
int i,j;
for(i=0;i<17;i++){
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[i][0],vakiluku[i][1]);
}
int userinput;
printf("etsi tietyn vuosiluvun vakiluku valilla 1900-2060. anna kymmenen tarkkuudella vuosiluku \n");
scanf("%d",&userinput);

switch(userinput)
{
	case 1900:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[0][0],vakiluku[0][1]);
	break;
	case 1910:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[1][0],vakiluku[1][1]);
	break;
	case 1920:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[2][0],vakiluku[2][1]);
	break;
	case 1930:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[3][0],vakiluku[3][1]);
	break;
	case 1940:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[4][0],vakiluku[4][1]);
	break;
	case 1950:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[5][0],vakiluku[5][1]);
	break;
	case 1960:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[6][0],vakiluku[6][1]);
	break;
	case 1970:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[7][0],vakiluku[7][1]);
	break;
	case 1980:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[8][0],vakiluku[8][1]);
	break;
	case 1990:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[9][0],vakiluku[9][1]);
	break;
	case 2000:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[10][0],vakiluku[10][1]);
	break;
	case 2010:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[11][0],vakiluku[11][1]);
	break;
	case 2020:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[12][0],vakiluku[12][1]);
	break;
	case 2030:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[13][0],vakiluku[13][1]);
	break;
	case 2040:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[14][0],vakiluku[14][1]);
	break;
	case 2050:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[15][0],vakiluku[15][1]);
	break;
	case 2060:
	printf("vuosiluku:%d. vakiluku:%d \n",vakiluku[16][0],vakiluku[16][1]);
	break;
	default:
		printf("annoit vaaran vuosiluvun\n");
}
int jsave,biggest,tester;
biggest = 0;
for(j=0;j<17;j++){
	tester = vakiluku[j+1][1]-vakiluku[j][1];
	if(tester>biggest){
	biggest = tester;
	jsave = j;
	}
}
printf("suurin vakiluvun muutos %d vuosien %d ja %d valilla",biggest,vakiluku[jsave][0],vakiluku[jsave+1][0]);


return 0;
}



