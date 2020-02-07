#!/usr/local/bin/python3


class Robot():

    def __init__(self,name,color,weight):
        self.name=name
        self.color=color
        self.weight=weight
    
    def Introduce_self(self):
        print("My name is:",self.name)
        print("My color is:",self.color)
        print("My name is:",self.weight)


def main():
    r1=Robot("pankaj","Wheatish",67)
    

    r1.Introduce_self()
    r2=Robot("Kurchi","White",68)
    r2.Introduce_self()


if __name__ == '__main__' :
    main()