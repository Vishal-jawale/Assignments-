

class Circle:

    PI=3.14

    def __init__(self):
        self.Radius=0.0
        self.Area=0.0
        self.Circumfrence=0.0

    def Accept(self,Value1):
        self.Radius=Value1

    def CalculateArea(self,Value2):
        self.Area= self.PI*self.Radius*self.Radius
        return self.Area

    def CalculateCircumfrence(self,Value3):
        self.Circumfrence=2 *self.PI* self.Radius
        return self.Circumfrence

    def Display(self):
        print(self.Radius)
        print(self.Area)
        print(self.Circumfrence)
    

def main():

    Rad=float(input("Enter The Radius: "))
    
    Obj1=Circle()
    Obj2=Circle()
    Obj3=Circle()
    
    

    Obj1.Accept(Rad)
    Obj2.Accept(Rad)
    Obj3.Accept(Rad)
    

    Ret=Obj1.CalculateArea(Rad)
    print("Area is: ",Ret)

    Ret=Obj2.CalculateCircumfrence(Rad)
    print(" Circumfrence is: ",Ret)

    
    
    
if __name__=="__main__":
    main()
    