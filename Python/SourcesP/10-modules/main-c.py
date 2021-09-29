from module1 import *

# Une fonction "locale" homonyme
def my_add(a, b):
    print(" Locale :", a, " ", b)
    return a + b

# utilisation de my_add du module m1
print("from m1: ", my_add(3, 4))
# utilisation de my_add LOCALE
print("Locale : ", my_add(3, 4))
