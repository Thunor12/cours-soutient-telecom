# fonction
def my_add(a, b):
    return a + b

print(my_add(3, 4))

# --- 
def my_add(a, b):  
    x = a + b
    if x < 0 :
        x = 'valeur < 0'

    return x


print(my_add(3, 4))
print(my_add(-3, -4))

# ----------------- docstring
def my_add(a, b):
    """ addition des 2 parametres a et b,
 renvoyer le resultat
    """
    return a + b

print(my_add(3, 4))
print(my_add.__doc__)
