

def Display(iNum):
    
    for i in range(iNum):
        for j in range(iNum):
            if(i<=j):
                print("*  ",end=" ")
        print()
  

def main():

    iNo=int(input("Enter Number"))
    bRet=Display(iNo)

if __name__=="__main__":
    main()