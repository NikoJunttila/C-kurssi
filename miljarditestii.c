#include <stdio.h>
#include <stdlib.h>

void arrayMin(int koko);

int main(){
	
arrayMin(100);
	return 0;
}

void arrayMin(int koko){
	int i,j,random,testi;
	int taulukko[koko];
	//tehd‰‰n taulukko jossa random numeroita N verran
	for(i=0; i<koko;i++){ 
		random = rand() % 1000 + 1;
		taulukko[i] = random;
}
testi = taulukko[0];
//loopataan taulukko ja etit‰‰n pienen luku
for(j=0;j<koko;j++){
	if(testi>taulukko[j]){
		testi = taulukko[j];
	}
}
printf("pienen luku on %d",testi);
}

