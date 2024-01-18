import Arithmetic






def main():
    iNum1=0
    iNum2=0
    

    iNum1=int(input("Enter First Number"))
    iNum2=int(input("Enter Second Number"))

    iRes=Arithmetic.Add(iNum1,iNum2)
    print("Addition of Two Number is:", iRes)

    iRes=Arithmetic.Sub(iNum1,iNum2)
    print("Subtraction of Two Number is:",iRes)

    
    iRes=Arithmetic.Mult(iNum1,iNum2)
    print("Multiplication of Two Number is:", iRes)

    iRes=Arithmetic.Div(iNum1,iNum2)
    print("Division of Two Number is:",iRes)


if __name__=="__main__":
    main()