# =============== Gestion d'exception, sans "2nde chance"
try:
    i = int(input(" (Saisie securise): Donner un entier SVP: "))
except ValueError:
    print(" Il faut donner un ENTIER!")

print(i)

# =============== Gestion d'exception AVEC "2nde chance"
while True:
    try:
        i = int(input(" (Saisie securise): Donner un entier SVP: "))
        break
    except ValueError:
        print(" Il faut donner un ENTIER!")
