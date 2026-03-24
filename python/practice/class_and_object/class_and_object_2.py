# Method inside a Class

# Normal question
class Employee:
    def __init__ (self, name, salary):
        self.name = name
        self.salary = salary

    def show_details(self):
        print(f"name: {self.name}, salary: {self.salary}")

employee_1 = Employee("Alone", 0)
employee_1.show_details()


# Real_life question
class BankAccount:
    def __init__ (self, account_holder, balance):
        self.account_holder = account_holder
        self.balance = balance

    def show_balance(self):
        print(f"Account holder: {self.account_holder}, balance: {self.balance}")

account_1 = BankAccount("Alone", 300)
account_1.show_balance()