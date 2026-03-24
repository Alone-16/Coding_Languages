# What is Class and Object


# normal question

class student:  # always use PascalCase
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no


s1 = student("prince", 219)
s2 = student("bhavya", 1111)

print(s1.name, s1.roll_no)
print(s2.name, s2.roll_no)


# real_life question

class laptop: # always use PascalCase
    def __init__(self, brand, ram):
        self.brand = brand
        self.ram = ram

prince_laptop = laptop("asus_vivobook", 16)
alone_laptop = laptop("asus_f15", 16)

print(f"Prince laptop brand: {prince_laptop.brand}, ram: {prince_laptop.ram}")
print(f"Alone laptop brand: {alone_laptop.brand}, ram: {alone_laptop.ram}")
