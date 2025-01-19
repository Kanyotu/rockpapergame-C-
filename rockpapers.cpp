#include<iostream>
#include <cstdlib>   // for std::rand() and std::srand()
#include <ctime>    // for std::time()

std::string compdecision(){
    std::srand(static_cast<unsigned>(std::time(0)));
    int randomInRange = 1 + (std::rand() % 3);
    
    if(randomInRange == 1){
        return "rock";
    }
    else if(randomInRange == 2){
        return "paper";
    }
    else{
        return "scissors";
    }
}
std::string userdecision(){
    std::string userinput;
    std::cout << "Enter your choice: rock, paper, or scissors: ";
    std::cin >> userinput;
    return userinput;
}
std::string compare(std::string user, std::string comp){
    
    if(user == comp){
        return "It's a tie!";
    }
    else if(user == "rock" && comp == "scissors"){
        return "You win!";
    }
    else if(user == "paper" && comp == "rock"){
        return "You win!";
    }
    else if(user == "scissors" && comp == "paper"){
        return "You win!";
    }
    else{
        return "You lose!";
    }
}
int main (){
    int i = 0;
    int compscore = 0;
    int userscore = 0;
    std::cout << "*****Welcome to Rock, Paper, Scissors!*****\n";
    do
    {
        std::string comp = compdecision();
        std::string user = userdecision();
        std::string result = compare(user, comp);
        std::cout << "Computer chose: " << comp << "\n";
        std::cout << result << "\n";
        if(result == "You win!"){
            userscore++;
        }
        else if(result == "You lose!"){
            compscore++;
        } 
        i++;
        /* code */
    } while (i<3);
        
    std::cout << "Computer score: " << compscore << "\n";
    std::cout << "Your score: " << userscore << "\n";
    if(compscore > userscore){
        std::cout << "Computer wins the game!\n";
    }
    else if(compscore < userscore){
        std::cout << "You win the game!\n";
    }
    else{
        std::cout << "It's a tie!\n";
    }
    return 0;
}