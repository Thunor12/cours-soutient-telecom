xt = (1, 2, 3.5)

print(xt)

print(xt[1])

# ------ Ce code est mauvais, on NE peut re-affecter
## xt[0] = 3 # erreur
print(" xt[0] = 3 est une erreur ")

tuple([1, 2, 3.5])
# (1, 2, 3.5)

tuple("Paris")
# ('P', 'a', 'r', 'i', 's')

#====================
mybase = {"Name" : "Alice", "Age" : 23}
print(mybase)

# {'Name': 'Alice', 'Age': 23}

print(mybase["Name"])
#Alice

mybase["Taille"] = 1.70
print(mybase)

mybs = {"Name" : "Bob", "Age" : 32}
print(mybase, mybs)
# {'Name': 'Alice', 'Age': 23, 'Taille': 1.7} {'Name': 'Bob', 'Age': 32}


mybs = {}
mybs["Name"] = "Bob"
print(mybs)

for key in mybase:
    print(key, mybase[key])


#Name Alice
#Age 23
#Taille 1.7

mybase.keys()
mybase.values()
