# if ... elif ... else

print(" -------------- IF ELIF ... ELSE ")

sa="lundi"
if sa == "lundi":
    print(sa)
else:
    print("mardi")

# if ... elif ... else

sa="mardi"
if sa == "jeudi":
    print(sa)
elif sa == "mardi":
    print("OK")
else:
    print("Non")

# expression logique combinee

sa = "samedi"
if sa == "lundi" or sa == "jeudi":
    print(sa)
else:
    print("mardi")

# ------------- While

print(" -------------- WHILE ----------------- ")
i = 0 
while i < 3 :
    print(i)
    i += 1

# ---------- for

print(" -------------- FOR ----------- ")
my_list = [0, 1, 2]
for i in my_list:
    print(i)

# avec range
print(" for avec range")
for i in range(3):
    print(i)


# -=====================   Break
print(" --------------  test Break ")
i = 0 
while i < 300:
    print(i)
    if i > 2:
        print(" Break avec i = ", i)
        break
    i += 1

print("Ouf, on sort avec i=", i)

# break avec boucles emboitees
i = 0
while i < 2:
    print(i)
    j = 0
    while j < 300:
        if j > 1:
            print(" Break boucle j avec (i, j) = ", i, " ", j)
            break
        j += 1
    i += 1

print("On sort de la double boucle  avec i, j=", i, " ", j)

# =============== Continue
print(" ---------------- test avec continue ")
for i in range(4):
    if  i % 2:
        continue # saut si IMPAIRE (modulo => 1)
    print(" le i affiche devrait etre PAIRE ", i)
 

