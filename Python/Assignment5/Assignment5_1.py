

class Demo:

    Value=0

    def __init__(self,Value1,Value2):
        self.no1=Value1
        self.no2=Value2
        

    def Fun(self):
        print(self.no1)
        print(self.no2)
        
    def Gun(self):
        print(self.no1)
        print(self.no2)   


def main():

    Obj1=Demo(11,21)
    Obj2=Demo(51,101)

    Obj1.Fun()
    Obj2.Fun()
    Obj1.Gun()
    Obj2.Gun()

if __name__=="__main__":
    main()
    