def Maximum(Arr,length):
    max=Arr[0]
    
    for i in range(length):
        if(max<Arr[i]):
            max=Arr[i]

    return max



def main():
    iRet=0
    print("Number of Elements:-")
    length=int(input())

    Arr=list()

    print("Enter the elements: ")
    for i in range(length):
        value=int(input())
        Arr.append(value)
    
    iRet=Maximum(Arr,length)
    print("Output:-",iRet)

if __name__=="__main__":
    main()