#!/usr/local/bin/python3

import sys

def reverse(s):
    
    str="" 
    for i in s: 
        str = i + str
    return str

def main():
    
  
    s = "Geeksforgeeks"
    
    print ("The original string  is : ",end="") 
    print (s) 
    
    print ("The reversed string(using loops) is : ",end="") 
    print (reverse(s)) 

    


if __name__ == '__main__' :
    main()