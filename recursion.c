/****************************************************************
*
* File   : recursion.c
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

int fun(int n)
{
	if(n==0){
		return 0;
	}
	else
	return 7 + fun(n-2);
}

int main(){
	printf("%d", fun(2));
	return 0;
}
