

def Factorial2(iNum):
    iMult=1
    i=1
    #using While loop
    while(i<=iNum):
        iMult=iMult*i
        i=i+1
    print(iMult)

def Factorial1(iNum):
    iMult=1
    # using for loop

    for i in range(1,iNum+1,1):
        iMult=i*iMult
    print(iMult)   

def main():

    iNo=int(input("Enter Number"))
    Factorial1(iNo)
    Factorial2(iNo)

if __name__=="__main__":
    main()