a = {1,2,4,5,7,8,10}
class Train:

    def __init__(self, name,seats):
        self.name = name
        self.seats = seats
        print("\n----------Welcome to Indian Railways-----------")

    def getTicketDetails(self):
        print(f"Train Name- {self.name}")
        print(f"{self.seats} seats are available")

    def bookTicket(self):
        if self.seats>0:
            print(f"Your seat has been booked")
        else:
            print(f"Sorry the train {self.name} is full!")
    def cancelTicket(self, seatNo):
        self.seatNo = seatNo
        
        print("Your ticket has been canceled sucessfully")
        self.seats +=1
Shatabdi = Train("Shatabdi",10)
Shatabdi.bookTicket()

print(a)