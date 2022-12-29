#include <stdio.h>
#include <stdlib.h>


int main(){
printf("ensimmäinen tehtava \n");
	
	int i,random;
	double total;
	int koko = 1000000000;
	double * miljardiTaulu = (double *) calloc(koko,8);
	srand(time(NULL));
	for(i=0; i<koko;i++){
		random = rand() % 100 + 1;
		miljardiTaulu[i] = random;
		if(i%1000000 == 0 && i != 0){
			printf("%d. %f \n",i,miljardiTaulu[i]);
			total += miljardiTaulu[i];
		}
	}
printf("total = %f \n",total);
int userNumber;
printf("print any number \n");
scanf("%d", &userNumber);
printf("%f \n", miljardiTaulu[userNumber]);
	
	free(miljardiTaulu);
		

   
printf("toinen tehtava \n");

int arr1[3][2];
int arr2[3][2];
int arr3[3][2];
arr1[0][0]=3; arr1[0][1]=5; arr1[1][0]=36; arr1[1][1]=44; arr1[2][0]=22; arr1[2][1]=23;
arr2[0][0]=6; arr2[0][1]=4; arr2[1][0]=8; arr2[1][1]=22; arr2[2][0]=2; arr2[2][1]=4;
arr3[0][0]= arr1[0][0]+arr2[0][0]; arr3[0][1]=arr1[0][1]+arr2[0][1]; arr3[1][0]=arr1[1][0]+arr2[1][0]; arr3[1][1]=arr1[1][1]+arr2[1][1]; arr3[2][0]=arr1[2][0]+arr2[2][0]; arr3[2][1]=arr1[2][1]+arr2[2][1];

int r,s;
for (r = 0; r<3; r++){
for (s = 0; s<2;s++)
printf("%d \n", arr3[r][s]);
}
printf("kolmas tehtava \n");

 int k,j,random2,numerot[100];
    srand(time(NULL));
    
    for ( k= 0; k < 100; k++) //looppi joka tekee taulokon missä on numerot
    {
        random2 = rand() % 6 + 1;
      // printf("%d %d \n",i,random);
        numerot[k] = random2;
    }
    int ykkoset,kakkoset,kolmoset,neloset,vitoset,kutoset;
    for (j=0;j<100;j++){ //lajitelee numeroiden määrät
 switch (numerot[j]) {
  case 1:
    ykkoset++;
    break;
  case 2:
    kakkoset++;
    break;
  case 3:
    kolmoset++;
    break;
  case 4:
    neloset++;
    break;
  case 5:
    vitoset++;
    break;
  case 6:
    kutoset++;
    break;
}   	
    	/*
    	if(numerot[j]==1){
    		ykkoset++;
		}
			if(numerot[j]==2){
    		kakkoset++;
		}
			if(numerot[j]==3){
    		kolmoset++;
		}
			if(numerot[j]==4){
    		neloset++;
		}
			if(numerot[j]==5){
    		vitoset++;
		}
			if(numerot[j]==6){
    		kutoset++;
		}
	*/
}
    printf("ykkosia on %d \n",ykkoset);
    printf("kakkosia on %d \n",kakkoset);
    printf("kolmosia on %d \n",kolmoset);
    printf("nelosia on %d \n",neloset);
    printf("vitosia on %d \n",vitoset);
    printf("kutosia on %d \n",kutoset);	
	
		

return 0;
}

