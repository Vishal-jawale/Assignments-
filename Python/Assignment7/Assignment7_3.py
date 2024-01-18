import threading


def DisplayEvenAddition(Brr):
    Add=0
    
    for i in  Brr:
        if(i%2==0):
            Add=Add+i
    
    print("Addition of Even Elements fromm the list Are: ",Add)
            


def DisplayOddAddition(Brr):
    Add=0
    for i in  Brr:
        if(i%2==1):
            Add=Add+i

    print("Addition of Odd Elements fromm the list Are: ",Add)


def main():

    Arr=[]
    value=0
    Size=int(input("Enter Size Of List: "))
    for i in range(Size):
        value=int(input())
        Arr.append(value)

    evenlist=threading.Thread(target=DisplayEvenAddition, args=(Arr,))
    oddlist=threading.Thread(target=DisplayOddAddition, args=(Arr,))

    
    evenlist.start()
    oddlist.start()

    evenlist.join()
    oddlist.join()

    


if __name__=="__main__":
    main()