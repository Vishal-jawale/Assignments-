
i=1

def Display(No):
    global i

    if(i<=No):
        print("* ",end=" ")
        i+=1
        Display(No)
    
def main():
    no=int(input("Enter Number: "))

    Display(no)


if __name__=="__main__":
    main()
