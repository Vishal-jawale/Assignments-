

def CheckEven(iNum):
    

    if(iNum%2==0):
        return True
    else:
        return False   

def main():
    bRet=False
    iNo=int(input("Enter Number"))
    bRet=CheckEven(iNo)

    if(bRet==True):
        print("It is Prime Number")
    else:
        print("It is Not Prime NUmber")
   

if __name__=="__main__":
    main()