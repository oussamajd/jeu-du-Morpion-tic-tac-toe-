#include <stdio.h>
#include <conio.h>

char grille[3][3];
int player=1;
char mark;
int choice;
int k=-1;
void affiche_grille(){
  system("cls");
      printf("\n\n\tTic Tac Toe\n\n");

      printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


      printf("     |     |     \n");
      printf("  %c  |  %c  |  %c \n", grille[0][0],grille[0][1],grille[0][2]);

      printf("_____|_____|_____\n");
      printf("     |     |     \n");

      printf("  %c  |  %c  |  %c \n", grille[1][0],grille[1][1],grille[1][2]);

      printf("_____|_____|_____\n");
      printf("     |     |     \n");

      printf("  %c  |  %c  |  %c \n", grille[2][0],grille[2][1],grille[2][2]);

      printf("     |     |     \n\n");

}

int case_vide(int i,int j){
 if (grille[i][j]=='-') {
    return 0;
   }
   else return 1;
   }

void Deposer(){
     if (player%2==1) {
     player=2;
     mark='X';
    }
   else {
     player=1;
    mark='O';
 }
 }

int Ligne_complete(int i){
     for (int  j= 0;  j<3;j++) {
      if (grille[i][j]=='X'&&grille[i][j]=='X'&&grille[i][j]=='X'||grille[i][j]=='O'&&grille[i][j]=='O'&&grille[i][j]=='O') {
     return 1;
   }
    else  return 0;
   }
   }

int colonne_complete(int j){
  for (int  i= 0;  i<3;i++) {
    if (grille[i][j]=='X'&&grille[i][j]=='X'&&grille[i][j]=='X'||grille[i][j]=='O'&&grille[i][j]=='O'&&grille[i][j]=='O') {
  return 1;
       }
      else  return 0;
  }
   }

int Diagonale_complete(){
  if (grille[0][0]=='X'&&grille[1][1]=='X'&&grille[2][2]=='X'||grille[0][0]=='O'&&grille[1][1]=='O'&&grille[2][2]=='O') {
    return 1;
  }
  else if (grille[0][2]=='X'&&grille[1][1]=='X'&&grille[2][0]=='X'||grille[0][2]=='O'&&grille[1][1]=='O'&&grille[2][0]=='O') {
    return 1;
  }
  else return 0;
}

int checkwin(){
  for (int i = 0; i <3; i++) {
    if (Ligne_complete(i)==1||colonne_complete(i)==1||Diagonale_complete()==1) {
      return 0;
    }
    else return -1;
  }
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i <3; i++) {
    for (int j = 0; j <3; j++) {
      grille[i][j]='-';
    }
  }
  do
     {
         affiche_grille();
         Deposer();
         printf("Player %d, enter a number:  ", player);
         scanf("%d", &choice);
         if (choice == 1){
           if (case_vide(0,0)==0) {
             grille[0][0]=mark;
           }
           else
                printf("invalid choice\n");
         }
         if (choice == 2){
           if (case_vide(0,1)==0) {
             grille[0][1]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 3){
           if (case_vide(0,2)==0) {
             grille[0][2]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 4){
           if (case_vide(1,0)==0) {
             grille[1][0]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 5){
           if (case_vide(1,1)==0) {
             grille[1][1]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 6){
           if (case_vide(1,2)==0) {
             grille[1][2]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 7){
           if (case_vide(2,0)==0) {
             grille[2][0]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 8){
           if (case_vide(2,1)==0) {
             grille[2][1]=mark;
           }
           else
                printf("invalid choice\n");
         }if (choice == 9){
           if (case_vide(2,2)==0) {
             grille[2][2]=mark;
           }
           else
                printf("invalid choice\n");
         }

k = checkwin();
}
         while (k=-1);
         if (k == 0)
       printf("==>\aPlayer %d win ", --player);
   else
       printf("==>\aGame draw");
  return 0;
}
