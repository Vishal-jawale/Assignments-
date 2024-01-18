

def DisplayFactorial(No):

    if No == 0 or No == 1:
        return 1
    else:
        return No * DisplayFactorial(No - 1)

    
    
def main():
    no=int(input(" Enter Number "))

    iRet=DisplayFactorial(no)
    print("Addition of Factors of Number is: ",iRet)

    



if __name__=="__main__":
    main()
