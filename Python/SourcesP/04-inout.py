i = 3
r = 3.9
s = "Voici"

print(r)
print("i=", i, "r=", r, "s=", s)

# --- str.format
print("i={}, r={}, s={}".format(i, r, s))
# avec indication d'ordre
print("i={2}, s={0}, s={0}".format(s, r, i))

# avec formatage
# i sur 4 digits, r avec 3 chiffres apres ",", s occupe 8 espaces
print("i={2:4d}, r={1:.3f}, s={0:>8s}".format(s, r, i)) 

# --- f-string
print(f"i={i}, r={r}, s={s}")

# avec formatage
print(f"i={i:4d}, r={r:.3f}, s={s:>8s}")

# avec opération
print(f"i={i:4d}, r={r:.2f}, i*r={i*r:.2f}")

# multi-ligne
print(f"""
            i:{i:6d}
           *r:{r:10.3f}
           ---------------------
           ={i*r:10.3f}
           """)
  

# ====================  input

##vs = input(" str SVP ")
##vi = int(input(" int SVP "))
##vr = float(input(" float SVP "))
##print(vs, vi, vr)

# =============== Gestion d'exception
while True:
    try:
        i = int(input(" (Saisie securise): Donner un entier SVP: "))
        break
    except ValueError:
        print(" Il faut donner un ENTIER!")

print(i)

