def Frequency(Arr,length,No):
    Freq=0
    
    for i in range(length):
        if(No==Arr[i]):
           Freq=Freq+1

    return Freq



def main():
    iRet=0
    print("Number of Elements")
    length=int(input())

    No=int(input("Element To Search"))

    Arr=list()

    print("Input Elements: ")
    for i in range(length):
        value=int(input())
        Arr.append(value)
    
    iRet=Frequency(Arr,length,No)
    print("Output:",iRet)

if __name__=="__main__":
    main()