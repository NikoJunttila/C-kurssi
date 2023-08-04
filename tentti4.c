/****************************************************************
*
* File   : tentti4.c
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
#include <string.h>

// Luo struct-rakenne henkilön tiedoille
struct Henkilo {
  int ika;
  char nimi[100];
};

int main() {
  // Luodaan struct-muuttuja henkilölle
  struct Henkilo henkilo;

  // Kysytään henkilön tiedot
  printf("Syota henkilon nimi: ");
  scanf("%s", henkilo.nimi);
  printf("Syota henkilon ika: ");
  scanf("%d", &henkilo.ika);

  // Tulostetaan henkilön tiedot
  printf("\nHenkilön tiedot:\n");
  printf("Nimi: %s\n", henkilo.nimi);
  printf("Ikä: %d\n", henkilo.ika);

  return 0;
}
