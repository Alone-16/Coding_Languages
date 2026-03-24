# Normal question
class User:
    def __init__(self, user, password):
        self.user = user
        self.__password = password

    def check_password(self, password):
        return password == self.__password


user_1 = User("Alone", "WhereAreYouNow")
print(user_1.check_password("IAmInTheWater"))


# Real-life question
class BankAccount:
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
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            return True
        return False


account_1 = BankAccount("Alone", 3000)

if not account_1.withdraw(3333):
    print("You don't have sufficient balance.")

print(account_1.get_balance())
