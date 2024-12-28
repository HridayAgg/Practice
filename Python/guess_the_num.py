import random
'''
Random
'''
num = random.randint(1,100)
out_of_guesses=False
guesses = 0
print("Welcome to the guess the number game")
def game():
	global out_of_guesses
	global guesses
	while guesses<10:
		guesses+= 1
		guess = int(input("Guess:"))
		if guesses == 0:
			out_of_guesses=True
		if guess>num:
			print("The hidden number is smaller")
			continue
		elif guess<num:
			print("The hidden number is larger")
			continue
		elif guess==num:
			print("YOU GUESSED THE NUMBER!")
			break
		if out_of_guesses:
			print("You are out of guesses")
			break
game()