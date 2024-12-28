# class Employee:
#     company="Google"
#     salary=150
# Hriday=Employee()
# Yashit=Employee()
# Hriday.company="Youtube"
# print(Hriday.salary)
# print(Yashit.salary)
# Hriday.salary=160
# print(Hriday.salary)

# class Student:
#     grade=9
#     def getrollNum(self):
#         print(f"The roll number is {self.rollNum}")
#     def getGrade(self):
#         print(f"The grade is {self.grade}")

# Hriday = Student()
# Yashit = Student()
# Hriday.rollNum=10
# Hriday.getrollNum()
# Yashit.getGrade()

class Employee:
    company='google'
    def __init__(self,name,age,subunit):
        print("-----------------------")
        self.name = name
        self.age = age
        self.subunit = subunit
    def getDetails(self):
        print(f"Name-{self.name}")
        print(f"Age-{self.age}")
        print(f"Subunit-{self.subunit}")
    def getCompany():
        print(f"The company {self.name} works in is {self.company}")
    def getSalary(self, sign):
        print(f"{self.name}'s salary is {self.salary}\nRegards \n{sign}")
    @staticmethod
    def greet():
        print("Good morning madam")

Hriday = Employee('Hriday',25,'Cameras')
Hriday.getDetails()
# Hriday.getSalary('Thanks for such a great incrementation')
