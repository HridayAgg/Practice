import random

COMP_chance=random.randint(1,3)

if COMP_chance==1:
    COMP = "r"
elif COMP_chance==2:
    COMP = "p"
elif COMP_chance==3:
    COMP = "s"

print("Welcome to the Rock,Paper and Scissor game\n")
Player=input("Enter your name:")
print("\nComputer has chosen.....")

def game(COMP,you):

    if COMP==you:
        return None
    elif COMP=='s':
        if you=='p':
            return False
        elif you=='r':
            return True
    elif COMP=='r':
        if you=='s':
            return False
        elif you=='p':
            return True
    elif COMP=='p':
        if you=='r':
            return False
        elif you=='s':
            return True

you=input(f"{Player}'s chance:Choose Rock(r),Paper(p) or Scissor(s)?:")

if COMP=="s":
    print(f"COMPuter chose scissors!")
elif COMP=="p":
    print(f"COMPuter chose paper!")
elif COMP=="r":
    print(f"COMPuter chose rock!")

a=game(COMP,you)

if a is None:
    print("It's a tie")
elif a:
    print("You win")
elif not a:
    print("You lose")

