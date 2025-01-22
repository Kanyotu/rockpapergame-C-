import random
def compdecision():
    import random
    comp = random.randint(1,3)
    if comp == 1:
        return "rock"
    elif comp == 2:
        return "paper"
    else:
        return "scissors"


def userdecision():
    user = input("Enter rock, paper, or scissors: ")
    return user
def gamedecision(user, comp):
    if user == comp:
        return "It's a tie!"
    elif (user == "rock" and comp == "scissors") or (user == "paper" and comp == "rock") or user == "scissors" and comp == "paper":
        return "You win!"
        
    else:
            return "computer win!"
    
    
def main():
    i=0
    compscore = 0
    userscore = 0
    
    while i<3:
        comp = compdecision()
        user = userdecision().lower()
        if user != "rock" and user != "paper" and user != "scissors":
            print("Invalid input! Try again.")
            continue
        print("Computer chose", comp)
        result = gamedecision(user, comp)
        print(result)
        if result == "computer win!":
            compscore += 1
        elif result == "You win!":
            userscore += 1
        i += 1

    print("\nGame Over!")
    print("Computer's score:", compscore)
    print("Your score:", userscore)    
    if compscore > userscore:
        print("Computer wins the game!")
    elif compscore < userscore:
        print("You win the game!")
    else:
        print("It's a tie!")

    

print("Welcome to Rock, Paper, Scissors!")
print("You will play 3 rounds against the computer.")
print("Enter 'rock', 'paper', or 'scissors' to make your choice.\n")
main() 
print("do you want to play again?/n yes or no")
play_again = input().lower()
while play_again == "yes":
    main() 
    print("do you want to play again?/n yes or no")
    play_again = input().lower()

print("Thanks for playing!")