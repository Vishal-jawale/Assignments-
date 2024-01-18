
class Numbers:

    def __init__(self , no):
        self.Value=no

    def ChkPrime(self , no):
        self.Value=no
        Number=0
        for i in range(2,self.Value):
            if(self.Value%i==0):
                Number=Number+1
        if(Number<1):
            return True
        else:
            return False
       
    

    def ChkPerfect(self , no):
        self.Value=no
        Number=0
        for i in range(1,self.Value):
            if(self.Value%i==0):
                Number=Number+i
    
        if(Number==self.Value):
            return True
        else:
            return False
        

    def SumFactors(self,no ):
        
        iSumFact=0

        for i in range(1,self.Value):
            if (self.Value%i== 0):
                iSumFact=iSumFact+i
        return iSumFact

    def Factors(self,no):
        print("Factors are:")
        for i in range(1, self.Value):
            if (self.Value % i == 0):
                print(i, end="  ")
        print()


def main():
    
    No=int(input("Enter The Number: "))

    Obj=Numbers(No)

    if(Obj.ChkPrime(No)==True):
        print("It is Prime Number: ")
    else:
        print("It is not Prime Number")

    if(Obj.ChkPerfect(No)==True):
        print("It is Perfect Number: ")
    else:
        print("It is not Perfect Number")
    
    
    Obj.Factors(No)
    


    Ret=Obj.SumFactors(No)
    print("Sum Factors Of No is: ",Ret)



if __name__=="__main__":
    main()