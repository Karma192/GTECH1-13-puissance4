#include <stdio.h>
#define NBL 6
#define NBC 7
int c,l;
int choice;
char game[NBL][NBC];
char x;
char token[] = "ox";
int joueur = 0; // Joueur 1 = 0, Joueur 2 =1
int c, l;
int PL = 5;


//def de la fonction initiant le tab
void initTab() {
  for (l=0; l<NBL; l++) {
    printf("|");
    for (c=0; c<NBC; c++) {
      game[l][c] = '.';
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
  }
}    

int Verif() {
  int exit = 0;
  int PL = 0;
  while (exit != 1) {
    if (game[PL][choice] = '.') {
      PL ++;
      exit = 0;
    }
    else {
      if (PL == 0) {
	PL = 10;
	exit ++;
	return 10;
      }
      else {
	PL --;
	exit ++;
	return PL;
      }
    }
  }
}

void main() {
  initTab();
  int Victory = 0;
  int OnOff = 0;
  int AccountRound = 1;
  while (Victory != 1 || AccountRound < 42) {
    game[NBL][NBC] = '.';
    printf("Veuillez choisir un chiffre correspondant à une colonne \n");
    printf("\n");
    scanf("%d",  &choice);
    choice--;
    PL = Verif();
    if (PL == 10) {
      printf("Vous ne pouvez pas poser de jetons ici !\n");
    }
    else {
      printf("\n");
      printf("+ - - - - - - - + \n");
      for (l=0; l<NBL; l++) {
	printf("|");
	for (c=0; c<NBC; c++) {
	  game[PL][choice] = 'x';
	  printf (" %c", game[l][c]);
	}
	printf(" |\n");
      }
      printf("+ 1-2-3-4-5-6-7 + \n");
      joueur = !joueur;
    }
  }
}
