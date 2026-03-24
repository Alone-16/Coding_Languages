# print vs return 

# Simple question

class Squarer:
    def __init__ (self, number):
        self.number = number

    def show_square(self):
        print(f"The square is {self.number * self.number}")

    def get_square(self):
        return self.number * self.number
    

square_num1 = Squarer(2)
square_num1.show_square()
squared_num1 = square_num1.get_square()
print(squared_num1)


# Class Based
class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def show_details(self):
        return f"Employee name: {self.name}, salary: {self.salary}"
    
employee_1 = Employee("Alone", 400)
print(employee_1.show_details())
