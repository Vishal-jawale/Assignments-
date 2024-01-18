
def ChkDivisible(iValue):

    if(iValue%5==0):
        print("Number is Divisible by 5")
    else:
        print("Number is Not Divisible by 5")



def main():
    iNo=int(input("Enter Number"))
    ChkDivisible(iNo)



if __name__ =="__main__":
    main()