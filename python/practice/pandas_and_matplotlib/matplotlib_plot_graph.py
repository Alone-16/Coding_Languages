import matplotlib.pyplot as plt

"""
x = [1, 2, 3]
y = [10, 20, 30]

plt.plot(x, y)
plt.xlabel("X values")
plt.ylabel("Y values")
plt.title("Simple Line Graph")
plt.show()
"""

# Real life question
students = ["Alone", "Alice"]
Marks = [85, 90]

plt.plot(students, Marks)  # plt.bar() is better for marks
plt.xlabel("Students")
plt.ylabel("Marks")
plt.title("Students Result")
plt.show()