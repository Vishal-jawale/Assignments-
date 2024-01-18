

class BankAccount:

    ROI=10.5

    def __init__(self,HolderName,Balance):
        self.Name=HolderName
        self.Amount=Balance

    def Display(self):
        print("Hello",self.Name)
        print("Your Account Created Succesfully With Current Balance: ",self.Amount)

    def Withdraw(self,Balance):
        if(self.Amount>=Balance):
            self.Amount=self.Amount-Balance
            print("Your Current Balance is:",self.Amount)
        else:
            print("Insufficient Balance")

        

    def Deposit(self,Balance):
        self.Amount=self.Amount+Balance
        print("Succesfully Deposited..!")
        print("Your Current Balance is:",self.Amount)

    def CalculateInterest(self):
        self.Amount=(self.Amount*BankAccount.ROI)//100

        print("Interest is :",self.Amount)



def main():

    Anup=BankAccount("Anup",10000)
    Pooja=BankAccount("Pooja",11000)

    Anup.Display()
    print("Operations On Anup's Account: ")
    Anup.Deposit(5000)
    Anup.Withdraw(1000)
    Anup.CalculateInterest()
    
    Pooja.Display()
    print("Operations On Pooja's Account: ")
    Pooja.Deposit(5000)
    Pooja.Withdraw(1000)
    Pooja.CalculateInterest()
    






    

if __name__=="__main__":
    main()