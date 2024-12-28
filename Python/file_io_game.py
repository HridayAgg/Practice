score = 33
def game():
    return score
f = open('highscore.txt')
old_hs = f.read()
f.close()
if old_hs=='':
    f = open('highscore.txt','w')
    f.write(str(score))
    f.close()
elif int(old_hs) < score:
    f = open('highscore.txt','w')
    f.write(str(score))
    f.close()
 