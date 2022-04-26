class Hello:
    def __init__(self, name, genre, number):
        self.name = name
        self.genre = genre
        self.number = number

    def change_number(self, change):
        self.number += change

asdf = Hello('Param nam', 'Sam', 42)

print(asdf.name, asdf.genre, asdf.number)

asdf.change_number(-42)
print(asdf.name, asdf.genre, asdf.number)

class Extra(Hello):
    def __init__(self, name, genre, number, boolean):
        super().__init__(name, genre, number)
        self.boolean = boolean

    def banana(self, true_or_false):
        self.boolean += true_or_false

me = Extra('stuff', 'things', 1, False + False)

print(me.name, me.genre, me.number, me.boolean)

me.banana(22)
print(me.boolean)

while me.number <= 10:
    print('hey', me.number)
    me.number += 1
