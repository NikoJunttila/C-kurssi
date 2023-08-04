/****************************************************************
*
* File   : tentti3.c
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
#include <string.h>



int main(){
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
	int monthError,yearError;
	
	
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
int totalError;
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

}
	


