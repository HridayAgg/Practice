class Calculator:
    def __init__(self,num):
        self.number = num
    @staticmethod
    def greet():
        print("Hello user!")
    def square(self):
        print(f"The square of {self.number} is {self.number**2}")
    def squareRoot(self):
        print(f"The square root of {self.number} is {self.number**0.5}")
    def cube(self):
        print(f"The cube of {self.number} is {self.number**3}")

a = Calculator(2)
a.greet()
a.cube()