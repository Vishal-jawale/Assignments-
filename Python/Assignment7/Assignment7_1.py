import threading


def DisplayEven(Num):
    print("Even Numbers are: ")
    for i in range(1,Num+1):
        if(i%2==0):
            print(i)

def Displayodd(Num):
    print("Odd Numbers are: ")
    for i in range(1,Num+1):
        if(i%2==1):
            print(i)



def main():

    Num=10
    even=threading.Thread(target=DisplayEven, args=(Num,))
    odd=threading.Thread(target=Displayodd, args=(Num,))

    
    even.start()
    odd.start()

    even.join()
    odd.join()


if __name__=="__main__":
    main()