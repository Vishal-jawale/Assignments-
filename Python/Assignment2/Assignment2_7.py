

def Display(iNum):
    
    for i in range(1,iNum+1,1):
        for j in range(1,iNum+1,1):
            print(j,end=" ")
        print()
            
  

def main():

    iNo=int(input("Enter Number"))
    Display(iNo)

if __name__=="__main__":
    main()