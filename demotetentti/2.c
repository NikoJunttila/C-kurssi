/****************************************************************
*
* File   : 2.c
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


void tokaTaski(int* taulu,int kokonaisluku);

int main(){
	
int taulukko[10];
	
	tokaTaski(taulukko,5);
	return 0;
}

void tokaTaski(int* taulu,int kokonaisluku){
int i;
taulu[10];
for(i=0;i<10;i++){
	taulu[i]=kokonaisluku;
	printf("%d \n",taulu[i]);
}

}


//Funktiolle viedään 10-alkioinen taulukko ja kokonaisluku. Funktio lisää viedyn kokonaisluvun taulukon jokaiseen alkioon.
