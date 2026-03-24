# MINI PROJECT: Smart Banking System

from abc import ABC, abstractmethod

class Account(ABC):
    def __init__(self, account_holder, balance):
        self.account_holder = account_holder
        self.__balance = balance

    def get_balance(self):
        return self.__balance

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            return True
        return False
    
    def withdraw(self, amount):
        if amount > self.__balance:
            return False
        else:
            self.__balance -= amount
            return True
        
    def __str__(self):
        return f"{self.account_type()} | Account holder: {self.account_holder}, Balance: {self.__balance}"
    
    def __len__(self):
        return len(self.account_holder)
        
    def __eq__(self, other):
        return self.account_holder == other.account_holder

    @abstractmethod
    def account_type(self):
        pass

class SavingsAccount(Account):
    def __init__(self, account_holder, balance):
        super().__init__(account_holder, balance)

    def add_interest(self, rate):
        balance = self.get_balance()
        interest = balance * (rate / 100)
        self.deposit(interest)

    def account_type(self):
        return "Saving Account"
    
    
class CurrentAccount(Account):
    def __init__(self,account_holder, balance, overdraft_limit):
        super().__init__(account_holder, balance)
        self.overdraft_limit = overdraft_limit

    def withdraw(self, amount):
        balance = self.get_balance()
        if balance - amount >= -self.overdraft_limit:
            return super().withdraw(amount)
        return False

        
    def account_type(self):
        return "Current Account"
    

savings = SavingsAccount("Alone", 1000)
current = CurrentAccount("Alex", 500, 1000)

savings.add_interest(10)
current.withdraw(1200)

print(savings)
print(current)

print(savings == current)


    

