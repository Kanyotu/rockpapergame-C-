#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char compdecision(){

    int randomInRange = 1 + (rand() % 3);
    
    if(randomInRange == 1){
        return 'r';
    }
    else if(randomInRange == 2){
        return 'p';
    }
    else{
        return 's';
    }
}
char userdecision(){
    char userinput;
    printf("Enter your choice: r-rock, p-paper, or s-scissors: ");
    scanf(" %c", &userinput);
    return userinput;
}
char compare(char user, char comp){
    
    if(user == comp){
        return 't';
    }
    else if(user == 'r' && comp == 's'){
        return 'w';
    }
    else if(user == 'p' && comp == 'r'){
        return 'w';
    }
    else if(user == 's' && comp == 'p'){
        return 'w';
    }
    else if(user == 'r' && comp == 'p'){
        return 'l';
    }
    else if(user == 'p' && comp == 's'){
        return 'l';
    }
    else if(user == 's' && comp == 'r'){
        return 'l';
    }
    else{
        return 'k';
    }
}
int main(){
        srand(time(0));
    char user, comp, result;
    int i = 0;
    int compscore = 0;
    int userscore = 0;
    printf("*****Welcome to Rock, Paper, Scissors!*****\n");
    do
    {
        /* code */

        user = userdecision();
         if (user != 'r' && user != 'p' && user != 's') {
            printf("Invalid input! Please enter 'r', 'p', or 's'.\n");
            continue; //  invalid input without incrementing `i`
        }
        comp = compdecision();
        result = compare(user, comp);
        printf("Computer chose: %c\n", comp);
        if(result == 't'){
            printf("It's a tie!\n");
        }
        else if(result == 'w'){
            printf("You win!\n");
            userscore++;
        }
        else if (result == 'l'){
            printf("You lose!\n");
            compscore++;
        }
        else{
            printf("Invalid input!\n");
        }
        i++;

    } while (i<3);
    printf("Final score - You: %d, Computer: %d\n", userscore, compscore);
    if (compscore > userscore)
    {
        /* code */
        printf("Computer wins the game!\n");
    }
    
    else if (compscore < userscore)
    {
        /* code */
        printf("You win the game!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
    
   
    return 0;
}