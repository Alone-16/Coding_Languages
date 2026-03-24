# Methods that MODIFY Object Data

# Normal question
class Employee:
    def __init__ (self, name, salary):
        self.name = name
        self.salary = salary

    def show_details(self):
        print(f"Employee name: {self.name}, Salary: {self.salary}")

    def increase_salary(self, amount):
        if amount > 0:
            self.salary += amount
        else:
            print("Increase amount must be positive")


employee_1 = Employee("Alone", 300)
employee_1.show_details()
employee_1.increase_salary(200)
employee_1.show_details()


# Real_life question
class BankAccount:
    def __init__ (self, account_holder, balance):
        self.account_holder = account_holder
        self.balance = balance

    def show_balance(self):
        print(f"Account holder: {self.account_holder}, balance: {self.balance}")

    def deposit(self, amount):
        self.balance += amount
    
    def withdraw(self, amount):
        self.balance -= amount

account_1 = BankAccount("Alone", 300)
account_1.show_balance()
account_1.deposit(100)
account_1.withdraw(200)
account_1.show_balance()