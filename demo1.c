#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void BMI_Niko_junttila(double height,double weight);

int main(){
int looping = 1;
srand(time(NULL));
while(looping){

	printf("enter number to continue \n");
	printf("1 => print 5 different random numbers that are between 5 and 50.\n");
	printf("2 => print a multiplication table when value (between 3 and 9) is given\n");
	printf("3 => calculate BMI \n");
	printf("0 => Exit \n");
	int a;
	scanf("%d", &a);
	int random,i,j,k;
	float b,c;
	int multiple;
	switch(a){
		case 1:
			for(i= 0;i<5;i++){
				random = rand() % 50 + 5;
				printf("%d \n",random);
			}
			break;
		case 2:
			printf("enter number between 3 and 9 \n");
			scanf("%d",&multiple);
			while(!((multiple <= 9) && (multiple >= 3))){
				printf("enter number between 3 and 9 \n");
				scanf("%d",&multiple);
				
			}
		for(j=1;j<=multiple;j++){
			for(k=1;k<=multiple;k++){
				printf(" %d ",j*k);
			}
			printf("\n");
		}	
			break;
		case 3:
			
			printf("enter height in meters. example (1.75)\n");
			scanf("%f", &b);
			printf("enter weight in kg. example (85)\n");
			scanf("%f", &c); 
			BMI_Niko_junttila(b,c);
			break;
		case 0:
			looping = 0;
			break;
	}
	}
	return 0;
}

void BMI_Niko_junttila(double height,double weight){
	double xdd = height * height;
	double bmi = weight/xdd;
	printf("your BMI is %f \n",bmi);
};
