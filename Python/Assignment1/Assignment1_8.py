
def Display(iNo):
    i=0
    while(i<iNo):
        print("*", end=" ")
        i=i+1

def main():
    iNum=int(input("Entet Number"))
    Display(iNum)

if __name__=="__main__":
    main()