#!/usr/local/bin/python3


class Robot():
    
    def Introduce_self(self):
        print("My name is:",self.name)


def main():
    r1=Robot()
    r1.name="Pankaj"
    r1.color="Wheatish"
    r1.weight="67"

    r1.Introduce_self()
    r2=Robot()
    r2.name="Kurchi"
    r2.color="White"
    r2.weight="68"
    r2.Introduce_self()


if __name__ == '__main__' :
    main()