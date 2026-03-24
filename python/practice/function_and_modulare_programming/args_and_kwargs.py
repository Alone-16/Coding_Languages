# Simple question
def add(*args):
    sum = 0
    for num in args:
        sum += num
    
    return sum

print(add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10))

# Real life question 
def student_details(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

student_details(name="Alone", age="20", course="Python", semester="2nd")