"""
Q What is a custom exception in Python? Why is it needed?
= custom exception is used for error in logic or code to be handled which is not a python error but code exceptions 
    it is needed for handling cases conditions so it dosnt break the logic or rule

Q Why must a custom exeption inherit from the Exception class?
= Python only treat something as an exception if it inherits from the built in Exception class
"""

# Q Create a custom exception called NegativeNumberError.
class NegativeNumberError(Exception):
    pass

def negative_check(n):
    if n < 0:
        raise NegativeNumberError("Negative number")

try:
    num = int(input("Enter a num: "))
    negative_check(num)
    print("Positive number")
except NegativeNumberError as e:
    print(e)


# Q Create a custom exception InvalidMarksError
class InvalidMarksError(Exception):
    pass 

try:
    marks = int(input("Enter marks: "))
    if marks > 100 or marks < 0:
        raise InvalidMarksError("Marks not valid")
except InvalidMarksError as e:
    print(e)

# Q Create a custom exception AgeNotEligibleError
# If age is less than 18, raise the complain and print a proper message
class AgeNotElligibleError(Exception):
    pass

try:
    age = int(input("Enter your age: "))
    if age < 18:
        raise AgeNotElligibleError("You are not eligible")
except AgeNotElligibleError as e:
    print(e)

"""
Q   What is the difference between:
    except AgeError:
    and
    except AgeError as e:
= except AgeError dont do anything while except AgeError as e saves the error message in e 
"""

# Q Create a program that:
# 1. Takes a password as input
# 2. Raises a custom exception WeakPasswordError if password length < 6
class WeakPasswordError(Exception):
    pass

try:
    password = input()
    if len(password) < 6:
        raise WeakPasswordError("The password is weak")
except WeakPasswordError as e:
    print(e)

# Q9️ (Student Management)
# Create a custom exception AttendanceError.
# Raise it if attendance is below 75%.

class AttendanceError(Exception):
    pass

try:
    attendance = int(input())
    if attendance < 75:
        raise AttendanceError("Low attendance")
except AttendanceError as e:
    print(e)

# Q Logic System
# Create a custom exception LogicFailedError
# Raise it if username or password is incorrect
class LogicFailedError(Exception):
    pass

try:
    username = input("Enter your username: ")
    password = input("Enter your password: ")

    if username != "alone" or password != "alone16":
        raise LogicFailedError("Username or password not correct")
    print("Login successful")
except LogicFailedError as e:
    print(e)

