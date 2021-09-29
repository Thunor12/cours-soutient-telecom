# ouverture

f = open("ftest.txt", "r")
print(type(f))  # pour visualiser sa classe: ficher

content = f.read()
print(content)

# avec readlines
f = open("ftest.txt", "r")
lns = f.readlines()
print(lns)
print(type(lns)) # pour visualiser la classe LIST

# ligne par ligne
f = open("ftest.txt", "r")
print("ligne 1: ", f.readline())
print("ligne 2: ", f.readline())


# ------------------------------------
# lecture, ecriture

# fa = open("ftesta.txt", "x")

fa = open("ftesta.txt", "w+")

fa.write("ligne1\n")
fa.write("ligne2\n")
fa.close()


fa = open("ftesta.txt", "a+")
fa.write("ligne3\n")
fa.close()

# ---------- WITH
with open("ftest.txt", "r") as f_in, \
     open("ftestb.txt", "w+") as f_out:
    # read lines into a list
    c_in = f_in.readlines() 
    # write to festb.txt en balayant la liste
    for ligne in c_in:
        f_out.write(ligne)
f_in.close()
f_out.close()

# un autre exemple a travers read(n) et len(s)
with open("ftest.txt", "r") as f_in, \
     open("ftestc.txt", "w+") as f_out:
    s = f_in.read(8) # read 8 bytes
    # write to festc.txt par bout de 8 octets
    # jusqu'a l'epuisement
    while len(s) :
        f_out.write(s)
        s = f_in.read(8) 
f_in.close()
f_out.close()
    

