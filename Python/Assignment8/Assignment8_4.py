

def DisplaySum(No, Divisor=1, sum=0):

    if(Divisor>No):
        return sum
    
    if(No%Divisor==0):
        sum=sum+Divisor
    
    return DisplaySum(No,Divisor+1,sum)

    
    
def main():
    no=int(input(" Enter Number "))

    iRet=DisplaySum(no)
    print("Addition of Factors of Number is: ",iRet)

    



if __name__=="__main__":
    main()
