#include "index.h"

int main (int argc, char **argv)
  {
    char user[20];
    char userChoice = 'd'; /*d for default*/

    printf("Hello there! What's your name?\t");
    scanf("%s", user);
    printf("\n");
    printf("Nice to meet you %s! I'm the personality guru, but you can call me P.G\n\n", user);
    printf("I want to tell you the kind of person I think you are.\n\n");
      /*printf("you chose %c\n", userChoice);*/
    printf("Would you like that and want to continue?\n Enter 'y' for yes and 'n' for no\t");
    userChoice = scanf(" %c", &userChoice); /*user choice is not being scanned for some reason*/
    printf("\n");
      /*printf("you chose %c\n", userChoice); //this is not printing for some reason*/

    if (userChoice == 'y')
    {
      printf("Great! So happy you could join us\n\n");
    } else if (userChoice == 'n'){
      printf("Bummer! Maybe next time? Goodbye!\n\n");
    } else {
      printf("Something wrong. troubleshoot now. u.c = %c\n\n", userChoice);
    }
  }
