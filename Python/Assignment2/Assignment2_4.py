

def Factor(iNum):
    i=1
    iSum=0

    while(i<=iNum/2):
        if(iNum%i==0):
            iSum=iSum+i
        i=i+1
    print(iSum)   

def main():

    iNo=int(input("Enter Number"))
    Factor(iNo)
   

if __name__=="__main__":
    main()