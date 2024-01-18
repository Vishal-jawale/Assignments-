

def CountDigit(iNum):
   
   iCnt=0
   iDigit=0
   while(iNum!=0):
       iDigit=iNum%10
       iCnt=iCnt+1
       iNum=iNum//10

   return iCnt

  

def main():
    iRet=0
    iNo=int(input("Enter Number"))
    iRet=CountDigit(iNo)

    print("Total Number Of Digits Are:",iRet)

if __name__=="__main__":
    main()