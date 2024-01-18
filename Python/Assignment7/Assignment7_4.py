import threading


def DisplaySmallChar(Brr):
    
    lowercase_letter=[]
    
    for i in  Brr:
       if(i.islower()):
           lowercase_letter.append(i)

    print(lowercase_letter)
           
           
        
    
            


def DisplayCapitalChar(Brr):
    
    uppercase_letter=[]
    
    for i in  Brr:
       if(i.isupper()):
           uppercase_letter.append(i)

    print(uppercase_letter)
   



def DisplayDigitChar(Brr):
    
    Digits=[]
    
    for i in  Brr:
       if(i.isdigit()):
           Digits.append(i)

    print(Digits)



def main():

    string=str(input("Enter String: "))

    small=threading.Thread(target=DisplaySmallChar, args=(string,))
    capital=threading.Thread(target=DisplayCapitalChar, args=(string,))
    digits=threading.Thread(target=DisplayDigitChar, args=(string,))

    
    small.start()
    capital.start()
    digits.start()

    small.join()
    capital.join()
    digits.join()



    


if __name__=="__main__":
    main()