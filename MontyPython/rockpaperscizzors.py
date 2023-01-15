print('Welcome to Rock Paper Scizzors!!!!')
import random

while True:

    while True:

          player=input()
          if player=='R':
                   print('PLAYER: Rock!')
                   break
          elif player=='P':
                   print('PLAYER: Paper!')
                   break
          elif player=='S':
                   print('PLAYER: Sizzors!')
                   break
          elif player=='E':
                   quit()
          else:
                   print('Please type R or P or S only; Type E to Exit')

    while True:
          bot = random.randrange(1,4)

          if bot==1:
                   print('Computer: Rock!')
                   break
          elif bot==2:
                   print('Computers: Paper!')
                   break
          else:
                   print('Computers: Sizzors!')
                   break

    while True:
           if bot==1 and player=='R' or bot==2 and player=='P'or bot==3 and player=='S':
                   print('Draw!')
                   break
           elif bot==1 and player=='P'or bot==2 and player=='S'or bot==3 and player=='R':
                   print('You Win!!!')
                   break
           else:
                   print('You Lose!!!')
                   break
