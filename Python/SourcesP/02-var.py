# Declarer une variable (i) et l'initialer avec 2
i = 2
print(i) # afficher la valeur de i

# declarer et instancier une reelle (r)
r = 3.4
print(r)

# creer une chaine de caracteres
s = "Voici"
print(s)

#---------- afficher les 3
print(i, r, s) # on verra le formatage plus tard



#=========== Booleennes

estUnEtreHumain = True
enHiver = False
en2019 = None
print(estUnEtreHumain, enHiver, en2019)

# ========== Conversion
print(int(3.9)) # Donne la partie ENTIERE
print(int("3")) # Chaine de caractere represenant 3:
# Attention: 3.9 NE fonctionne PAS
# print(int("3.9")) # cette instruction N'est PAS valide 
    
print(float("3.9"))
print(float("3")) # ici, un entier est OK: qui peut plus, peut moins

print(str(3))
print(float(3.9))

# Il est possible de prendre une variable comme argument
si = "4"
sr = "4.9"
print(int(r), float(i), int(si), float(si), float(sr))
print(str(i), str(r))


#---------- type
print(type(i))
print(type(r))
print(type(s))

x = 3
type(x)

x = 3.0
type(x)

x = "3.0"
type(x)


