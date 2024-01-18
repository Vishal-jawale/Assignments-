def Minimum(Arr,length):
    min=Arr[0]
    
    for i in range(length):
        if(min>Arr[i]):
            min=Arr[i]

    return min



def main():
    iRet=0
    print("Number of Elements:")
    length=int(input())

    Arr=list()

    print("Input Elements: ")
    for i in range(length):
        value=int(input())
        Arr.append(value)
    
    iRet=Minimum(Arr,length)
    print("Output:",iRet)

if __name__=="__main__":
    main()