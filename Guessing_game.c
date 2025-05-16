#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
  int random,guess;
  int no_of_guess=0;
  srand(time(NULL));
  printf("Welcome to the world of Guessing Numbers\n");

  random=rand() % 100+1;//generating number

  do{
    printf(" \npleace enter  your guess between (1 to 100)");
    scanf("%d",&guess);
    no_of_guess++;
    if(guess<random){
      printf("Guess larger number \n");
    }else if(guess>random){
      printf("Guess is smaller number \n");

    }
    else{
      printf("Congratulation !!!! you have successfuly guessed the Number. in %d attempt \n",no_of_guess); 
    }

  }while (guess !=random);
  {
    printf("Bye Bye ,thank for playing .\n");
    printf("Developed by :Rohit kumar .\n");



  }
  

}