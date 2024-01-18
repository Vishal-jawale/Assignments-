def Addition(Arr,length):
    sum=0
    
    for i in range(length):
        sum=sum+Arr[i]

    return sum



def main():
    iRet=0
    print("Number of elements")
    length=int(input())

    Arr=list()

    print("Input Elements: ")
    for i in range(length):
        value=int(input())
        Arr.append(value)
    
    iRet=Addition(Arr,length)
    print("Output:",iRet)

if __name__=="__main__":
    main()