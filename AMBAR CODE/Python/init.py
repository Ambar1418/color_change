class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def show(self):
        print("Name",self.name)
        print("Age:",self.age)

c1=person("Ambar",18)
print(c1.name)
print(c1.age)
