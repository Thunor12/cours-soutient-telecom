# Arithematique
ia = 2
ib = 7

ra = 1.6
rb = 5.2

print(f"{ia} + {ib} = {ia + ib}")
print(f"{ia} - {ra} = {ia - ra:.2f}")
print(f"{ia} * {ra} = {ia * ra}")
print(f"{ib} / {ia} = {ib / ia:.3f}") # resultat reel

# -- Division reduite a la partie entiere

print(f"{ib} // {ia} = {ib // ia}")
print(f"{rb} // {ia} = {rb // ia}")

# --- Modulo

print(f"{ib} % {ia} = {ib % ia}")
print(f"{rb} % {ia} = {rb % ia:.3f}")

# Puissance

print(f"{ib} ** {ia} = {ib ** ia }")
print(f"{rb} ** {ra} = {rb ** ra :.3f}")

# operation puis affectation
x = 3
x += 4
print(f" x += 4 = {x}")
x %= 3
print(f" x %= 3 = {x }")
x *= 2
print(f" x *= 2 = {x }")
x **=3
print(f" x **= 3 = {x }")

#======================= Comparaison
s = "Bon"
i = 2
r = 3.5

print( 3>4 ) # donne False
print( i < r ) # donne True
print ( s == "Good" ) # donne False

# Chaining comparaison
print( 1 < i < 3 ) # donne True
print( 2 > r < 20 )# donne False
print( 1 <= i < r < 20 )  # donne True


# ============ Logique

bt = True
bf = False

print( bt and bf)  # donne False
print( bf or True) # donne True

# ---- Enchainement
print( bf or True and bt ) # donne True

print( 1 > 2 or 3 <4  and bt ) # donne True

#

print(bool(s)) # donne True
print(bool("")) # donne False
print(bool(bf)) # donne False
print(bool(bt)) # donne True
print(bool(0.0)) # donne False
print(bool(0.0001)) # donne True


# ===========================  MEMBERSHIP: in (ET not in)
print( 1 in [1, 2, 3, 4]) # True

print( "H" in "Bonjour") # False


print( 3.5 not in [1, 2, 3, 4]) # True

# ========================= IS
sa = "Hello"
sb = sa
print(sa is sb)

sb = "Ciao"
print(sa is sb)



