
def DisplayEven(iNo):
    i=1
    while(i<=iNo):
        if(i%2==0):
            print(i, end=" ")
        i=i+1

def main():
    iNum=int(input("Entet Number"))
    DisplayEven(iNum)

if __name__=="__main__":
    main()