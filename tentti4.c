#include <stdio.h>
#include <string.h>

// Luo struct-rakenne henkil�n tiedoille
struct Henkilo {
  int ika;
  char nimi[100];
};

int main() {
  // Luodaan struct-muuttuja henkil�lle
  struct Henkilo henkilo;

  // Kysyt��n henkil�n tiedot
  printf("Syota henkilon nimi: ");
  scanf("%s", henkilo.nimi);
  printf("Syota henkilon ika: ");
  scanf("%d", &henkilo.ika);

  // Tulostetaan henkil�n tiedot
  printf("\nHenkil�n tiedot:\n");
  printf("Nimi: %s\n", henkilo.nimi);
  printf("Ik�: %d\n", henkilo.ika);

  return 0;
}
