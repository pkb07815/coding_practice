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


class Person():
    def __init__(self,n,p,i):
        self.name=n
        self.personality=p
        self.is_sitting=i

    def Introduce_self(self):
        print("My name is:",self.name)
        print("My color is:",self.personality)
        print("My name is:",self.is_sitting)

    def sit_down(self):
        self.is_sitting=True


    def stand_up(self):
        self.is_sitting=False



def main():
    r1=Robot("pankaj","Wheatish",67)
    r1.Introduce_self()
    
    r2=Robot("Kurchi","White",68)
    r2.Introduce_self()

    p1=Person("Alice","Aggresive",False)
    p1.Introduce_self()

    p2=Person("Becky","Talkative",True)
    p2.Introduce_self()

    p1.robot_owned=r2
    p2.robot_owned=r1

#robot_owned is a new attribute assigned to p1 and p2

    p1.robot_owned.Introduce_self()
    p2.robot_owned.Introduce_self()




if __name__ == '__main__' :
    main()