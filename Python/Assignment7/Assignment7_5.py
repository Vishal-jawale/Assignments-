import threading


def DisplayNum():

    print("Numbers : ")
    for j in range(1,51,1):
        print(j)




def DisplayNumRev():
    print("Numbers In Reverse Orders : ")
    for j in range(50,0,-1):
        print(j)
    


def main():

  
        
    thread1=threading.Thread(target=DisplayNum, args=())
    thread2=threading.Thread(target=DisplayNumRev, args=())

    thread1.start()
    thread1.join()

    thread2.start()
    thread2.join()



    


if __name__=="__main__":
    main()