import calculator
import math 
import sys
import random
from datetime import datetime
from my_package import arithmetic
from my_package import string_ops

# ----------------------------------------------------------

# ----------------------------------------------------------
from my_package import arithmetic as arith 

# ----------------------------------------------------------
a = 2
b = 3

addition = calculator.add(a, b)

print(addition)
# -----------------------------------------------------------
print(math.sqrt(9))
print(math.pow(2, 3))
# -----------------------------------------------------------
print(sys.path)
# -----------------------------------------------------------
print(random.randint(1, 100))
# -----------------------------------------------------------
print(datetime.now().time())
print(datetime.now().strftime("%H:%M:%S"))
# -----------------------------------------------------------
# Arithmetic functions
print(arithmetic.add(10, 5))
print(arithmetic.multiply(4, 3))

# String functions
print(string_ops.to_upper("hello"))
print(string_ops.reverse("Python"))
# -----------------------------------------------------------
