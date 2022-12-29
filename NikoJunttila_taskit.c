#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//tehtävä 3 meni rikki kun liitti kaikki koodit yhteen toimii jos sen ajaa yksin.

void randomz(int vitone);
void sarjaaa(void);
struct Henkilo {
  int ika;
  char nimi[100];
};

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
printf("maapallon vaestontiheys vuonna %d oli %.2f \n",vakiluku[index][0],tiheys);


  struct Henkilo henkilo;

  printf("Syota henkilon nimi: ");
  scanf("%s", henkilo.nimi);
  printf("Syota henkilon ika: ");
  scanf("%d", &henkilo.ika);

  printf("\nHenkilön tiedot:\n");
  printf("Nimi: %s\n", henkilo.nimi);
  printf("Ikä: %d\n", henkilo.ika);

	int day;
	int month;
	int year;
	printf("anna paiva\n");
	scanf("%d", &day);
	printf("anna kuukausi\n");
	scanf("%d", &month); 
	printf("anna vuosiluku\n");
	scanf("%d", &year);
	int leapYear = 0;
	int dayError = 0;
	int monthError = 0;
	int yearError = 0;
	
	
	 if (year % 400 == 0) {
      leapYear = 1;
   }
   else if (year % 100 == 0) {
      leapYear = 0;
   }
   else if (year % 4 == 0) {
    leapYear = 1;
   }
   else {
      leapYear = 0;
   }


	if(leapYear == 1){
		if(month == 2 && (day > 29 || day < 1)){
			dayError = 1;
		}
	}
	if(leapYear == 0){
		if(month == 2 && (day > 28 || day < 1)){
			dayError = 1;
		}
	}
		
	if(((day < 1) || (day > 31))){
		printf("day is not correct");
		dayError = 1;
	}
	
	if(((month == 4)||(month == 6)||(month == 9)||(month == 11)) && day != 30){
		monthError = 1;
	}

	if(((month < 1) || (month > 12))){
		printf("month is not correct");
		monthError = 1;
	}
	if(((year < 1900) || (year > 2100))){
		printf("year is not correct");
		yearError = 1;
	}
int totalError = 0;
totalError = dayError + monthError + yearError;

if(totalError > 1){
	printf("multiple errors");
	return 4;
}
else if(dayError == 1){
	
	return 1;
}
else if(monthError == 1){
	printf("error with months");
	return 2;
}
else if(yearError == 1){
	printf("error with years");
	return 3;
}
else {
	printf("all good");
	return 5;
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

















