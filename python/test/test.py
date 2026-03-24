"""
import random

choices = [11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]

def get_card(card):
    card.append(random.choice(choices))
    return card

cards = []

cards.append(1)
cards.append(1)
cards.append(1)
cards.append(1)


cards = get_card(cards)

print(cards)

test_card = [2, 1]

if test_card == [1, 2] or test_card == [2, 1]:
    print(True)
else:
    print(False)

print(input())
name = input("Enter your name: ")
age = input("Enter your age: ")
course = input("Enter your course: ")
college = input("Enter your college: ")
print(f"Hello, my name is {name}, my age is {age}")
print(f"I am pursing {course} from {college}.")
print("\n".join(str(i) for i in range(100, 0, -1)))

temps = tuple(map(int, input().split()))

heatwaves = tuple(
    temps[i:i+3]
    for i in range(len(temps) - 2)
    if all(t > 35 for t in temps[i:i+3])
)

print(heatwaves)

print("hello")
print("\n")
print("hi")

"""
