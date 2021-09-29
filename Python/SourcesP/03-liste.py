# listes

weekend = ["samedi", "dimanche"]
a = [1, 2, 3]
print(weekend, a)

# concatenation (dynamique, heterogene)
wa = weekend + a + [7.8]
print(wa)

# Gestion dynamique, avec delele d'un  element
del wa[1]
print("apres suppression de wa[1]", wa)
