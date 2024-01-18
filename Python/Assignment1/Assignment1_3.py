
def Add(iValue1,iValue2):
    iAns=0
    iAns=iValue1+iValue2
    return iAns




def main():
    iRes=0

    iNo1=int(input("Enter First Number:-"))
    iNo2=int(input("Enter  Second Number:-"))

    iRes=Add(iNo1,iNo2)
    print("Addition is :",iRes)



if __name__ =="__main__":
    main()