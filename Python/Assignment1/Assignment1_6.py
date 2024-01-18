
def ChkNum(iValue):

    if(iValue>0):
        print("Number is Positive")
    else:
        print("Number is Negative")



def main():
    iNo=int(input("Enter Number"))
    ChkNum(iNo)



if __name__ =="__main__":
    main()