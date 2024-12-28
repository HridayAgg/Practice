import os
# os.system('cls')
def PlaceChosen(Player,alphabet):
	# os.system('cls')
	if Player==1:
		a[0]=alphabet
	elif Player==2:
		a[2]=alphabet
	elif Player==3:
		a[4]=alphabet
	elif Player==4:
		a[5]=alphabet
	elif Player==5:
		a[7]=alphabet
	elif Player==6:
		a[9]=alphabet
	elif Player==7:
		a[11]=alphabet
	elif Player==8:
		a[13]=alphabet
	elif Player==9:
		a[15]=alphabet
	print(a)
# Introduction
print("Welcome to the TIC TAC TOE game")
# Total Chances
Chances=9
# Choose x or o
p1=input("Player 1 \n Choose x or o:")
p1=p1.lower()
# os.system('cls')
# Assigning both players x and o
if p1=="x":
	p2="o"
elif p1=="o":
	p2=="x"
# Main game
# a=print("\t0|2|4\n\t5|7|9\n\t11|13|15")
a=print("\t | |\n\t | | \n\t | | ")
while Chances<=9:
	Chances = Chances + 1
	i1=input("Player 1 choose the box:") 
	PlaceChosen(i1,p1)
	