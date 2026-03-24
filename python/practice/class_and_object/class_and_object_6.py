# Inheritance

# Normal question 

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, roll_no, age):
        super().__init__(name, age)
        self.roll_no = roll_no

    def show_details(self):
        return f"Name: {self.name}, Roll No: {self.roll_no}, Age: {self.age}"
    

s1 = Student("Alone", 292, 20)
print(s1.show_details())



# Real Life question 
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance

    def get_balance(self):
        return self.__balance

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            return True
        return False

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            return True
        return False
    
class SavingsAccount(BankAccount):
    def __init__(self, balance):
        super().__init__(balance)

    def add_interest(self, rate):
        balance = self.get_balance()
        interest = balance * (rate / 100)
        self.deposit(interest)

        

account = SavingsAccount(1000)
account.add_interest(5)
print(account.get_balance())


# Real Life question
class Employee:
    def __init__(self, salary):
        self.__salary = salary

    def get_salary(self):
        return self.__salary
    
    def add_bonus(self, amount):
        if amount > 0:
            self.__salary += amount
            return True
        return False

class Manager(Employee):
    def __init__(self, salary, department):
        super().__init__(salary)
        self.department = department

    def increase_salary_by_percent(self, percent):
        salary = self.get_salary()
        increase = salary * (percent / 100)
        self.add_bonus(increase)

manager = Manager(20000,"IT")
manager.increase_salary_by_percent(10)
print(manager.get_salary())

