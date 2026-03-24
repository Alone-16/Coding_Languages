# Magic Methods (Dunder Methods)

class Student:
    def __init__(self, name):
        self.name = name

#    def __str__(self):
#        return f"Student name: {self.name}"
    
    def __repr__(self):
        return f"Student('{self.name}')"

students = [Student("Alone"), Student("Alex")]
print(students)

class Team:
    def __init__(self, members):
        self.members = members

    def __len__(self):
        return len(self.members)

team = Team(["A", "B", "C"])
print(len(team))


class User:
    def __init__(self, username):
        self.username = username

    def __eq__(self, other):
        return self.username == other.username

u1 = User("alone")
u2 = User("alone")
print(u1 == u2)  # True


# Simple question 
class Book:
    def __init__(self, title, page):
        self.title = title
        self.page = page

    def __str__(self):
        return f"Book: {self.title} ({self.page} pages)"
    
book = Book('Atomic Habits', 320)
print(book)

# Real life question 
class Inventory:
    def __init__(self, item):
        self.item = item

    def __len__(self):
        return len(self.item)
    
items = ['book', 'computer', 'phone']
inventory = Inventory(items)
print(len(inventory))

# Comparison
class Player:
    def __init__(self, name):
        self.name = name

    def __eq__(self, other):
        return self.name == other.name
    
player1 = Player("alone")
player2 = Player("alone")
print(player1 == player2)
        
        