#!/usr/local/bin/python3

import sys

def hello(name):
    print('my name is:',name)
def main():
    print("len is: ",len(sys.argv),"\nargs are: ",sys.argv[0],sys.argv[1])
    hello(sys.argv[1])

    


if __name__ == '__main__' :
    main()
