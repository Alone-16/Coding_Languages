# Polymorphism

# Normal question
class Vehicle:
    def fuel_type(self):
        return "Generic Fuel"

class Car(Vehicle):
    def fuel_type(self):
        return "Petrol or Diesel"
    
v = Vehicle()
c = Car()
print(v.fuel_type())
print(c.fuel_type())



# Real Life question
class Employee:
    def get_role(self):
        return "Employee"
    
class Manager(Employee):
    def get_role(self):
        return "Manager"
    
class Intern(Employee):
    def get_role(self):
        return "Intern"
    
employees = [Employee(), Manager(), Intern()]

for emp in employees:
    print(emp.get_role())