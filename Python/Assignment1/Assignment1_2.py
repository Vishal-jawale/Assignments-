
def ChkNum(iValue):

    if(iValue%2==0):
        print("Number is Even")
    else:
        print("Number is Odd")



def main():
    iNo=int(input("Enter Number"))
    ChkNum(iNo)



if __name__ =="__main__":
    main()