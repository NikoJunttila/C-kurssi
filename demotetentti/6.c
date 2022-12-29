#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//en saanu vikaa numeroa luettua ja vuosiluvun tunnistus erittäin buginen
// ja jos laittaa kirjaimia numeroiden tilalle niin silti antaa validin vastauksen mutta jotain yritetty tehtävää varten.


int main(){
char ssn[15]= "290198+3243";
char days[3];
char months[3];
char years[3];
char century[1];
char identifier[3];
//char last[10];
char* ssn2 = ssn + 2;
char* ssn3 = ssn + 4;
char* ssn4 = ssn + 6;
char* ssn5 = ssn + 7;
char* ssn6 = ssn + 10;

memcpy(days,ssn,2);
memcpy(months,ssn2,2);
memcpy(years,ssn3,2);
memcpy(century,ssn4,1);
memcpy(identifier,ssn5,3);
//memcpy(last,ssn6,1);
//printf("%c \n",last[0]);
printf("%s \n",century);
	int first,second;
	int third,fourth;

	first = atoi(days);	
	second = atoi(months);
	third = atoi(years);
	fourth = atoi(identifier);
	


if(strcmp(century,"A98") == 0 || strcmp(century,"+98") == 0 ||	strcmp(century,"-98") == 0){
		//printf("good");
}
else{
printf("century identifier not valid");
return 0;
}
		
if(strlen(ssn) != 11){
	printf("string length not valid");
	return 0;
}
if(first>31){
	printf("day not valid");
	return 0;
}
if(second>12){
	printf("month not valid");
	return 0;
}
if(third > 99){
printf("not valid year");
return 0;	
}

if(fourth > 2 && fourth < 899 ){
//printf("test");
}
else{
	printf("identifier not valid number");
	return 0;
}


printf("valid number \n");		

 	


	return 0;
}
