
class Arithmetic:

    def __init__(self):
        self.Value1=0
        self.Value2=0

    def Accept(self,no1,no2):
        self.Value1=no1
        self.Value2=no2

    def Addition(self):
        Value=self.Value1+self.Value2
        return Value

    def Multiplication(self):
        Value=self.Value1*self.Value2
        return Value

    def Division(self):
        Value=self.Value1//self.Value2
        return Value

    def Subtraction(self):
        Value=self.Value1-self.Value2
        return Value
           



def main():

    no1=int(input("Enter First Number: "))
    no2=int(input("Enter Second Number: "))

    
    Obj1=Arithmetic()
    Obj2=Arithmetic()
    Obj3=Arithmetic()
    Obj4=Arithmetic()

    Obj1.Accept(no1,no2)
    Obj2.Accept(no1,no2)
    Obj3.Accept(no1,no2)
    Obj4.Accept(no1,no2)
    
    Ret=Obj1.Addition()
    print("Additon is: ",Ret)

    Ret=Obj1.Subtraction()
    print("Subtraction is: ",Ret)

    Ret=Obj1.Division()
    print("Division is: ",Ret)

    Ret=Obj1.Multiplication()
    print("Multiplication is: ",Ret)



if __name__=="__main__":
    main()