/****************************************************************
*
* File   : algorytmi.c
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
	int i,random,a,j;
	int taulukko[100];
	for (i = 0; i<100;i++){
	random = rand() % 100;
	taulukko[i] = random;
   }
       for (i = 0; i < 100; ++i) 
        {
            for (j = i + 1; j < 100; ++j)
            {
                if (taulukko[i] > taulukko[j]) 
                {
                    a =  taulukko[i];
                    taulukko[i] = taulukko[j];
                    taulukko[j] = a;
                }
            }
        }
          printf("numerot jarjestetty pienimmasta suurimpaa \n");
        for (i = 0; i < 100; ++i)
            printf("%d\n", taulukko[i]);
 
   return 0;
}
