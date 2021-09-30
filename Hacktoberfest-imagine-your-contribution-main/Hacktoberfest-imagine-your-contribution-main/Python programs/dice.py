
import random
roll_again = "yes"

while(roll_again == "yes" or roll_again == "y"):

    print(random.randint(1, 7))
    roll_again = input("Do you want to roll again: y/yes or n/no:: ")
