

def Display(No):
    

    
    if(No>0):
        print(No,end=" ")
        No=No-1
        Display(No)
    
def main():
    no=int(input(" Enter Number "))

    Display(no)


if __name__=="__main__":
    main()
