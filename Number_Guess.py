import random
import time

print("""*****************************

    Number Guessing Game

    Guess a number between 1 and 40.

    before you run out of 7 lives


    *****************************""")

random_number = random.randint(1, 40)
guess_limit = 7

while guess_limit > 0:

    try:
        guess = int(input("Guess: "))
    except:
        print("Please enter a valid integer.")
        continue

    print("Checking...")
    time.sleep(1)

    if (guess < random_number):
        print("Please enter a higher value...")
    elif (guess > random_number):
        print("Please enter a lower value...")
    else:
        print("Congratulations!\nThe number is: ", random_number)
        break
    
    guess_limit -= 1
    print("Lives left:",guess_limit)

    if (guess_limit == 0):
        print("You have run out of guesses...")
        print("The number was: ", random_number)
