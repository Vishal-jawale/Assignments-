import threading


def DisplayEvenfactor(Num):
    print("Even factors are: ")
    for i in range(1,Num):
        if(Num%i==0):
            if(i%2==0):
                print(i)


def Displayoddfactor(Num):
    print("Odd factors are: ")
    for i in range(1,Num):
        if(Num%i==0):
            if(i%2==1):
                print(i)



def main():

    Num=int(input("Enter Number: "))
    evenfactor=threading.Thread(target=DisplayEvenfactor, args=(Num,))
    oddfactor=threading.Thread(target=Displayoddfactor, args=(Num,))

    
    evenfactor.start()
    oddfactor.start()

    evenfactor.join()
    oddfactor.join()

    print("exit from main")


if __name__=="__main__":
    main()