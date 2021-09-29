
class myBase:
    # CONSTRUCTEUR
    def __init__(self, n="Alice", a=16):
        self.Name = n
        self.Age  = a
        
    # methods
    def addAge(self, i):
        self.Age += i

    def printAge(self):
        print(f"{self.Age}")
         

mb = myBase()
print(mb.Name)
mc = myBase("Bob", 23)
print(mc.Age)

mc.addAge(53)
mc.printAge()


