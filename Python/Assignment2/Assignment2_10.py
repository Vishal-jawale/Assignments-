

def CountDigit(iNum):
   
   iSum=0
   iDigit=0
   while(iNum!=0):
       iDigit=iNum%10
       iSum=iSum+iDigit
       iNum=iNum//10

   return iSum

  

def main():
    iRet=0
    iNo=int(input("Enter Number"))
    iRet=CountDigit(iNo)

    print("Total Addition Of Digits Are:",iRet)

if __name__=="__main__":
    main()