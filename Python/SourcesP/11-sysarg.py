import sys

print(sys.argv, len(sys.argv))

if  len(sys.argv) > 2:
    print(" Un seul mot SVP ")
elif (len(sys.argv) == 2): 
    print(sys.argv[0], " te dit ", sys.argv[1])
else:
    print(sys.argv[0], " te dit Bonjour par defaut")
