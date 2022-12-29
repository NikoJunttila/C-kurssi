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
