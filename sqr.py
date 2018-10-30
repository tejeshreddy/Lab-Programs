#code
import math
def square(num):
    sr=math.sqrt(num)
    if(sr%1==0):
        print("1")
    else:
        print("0")
    


t=int(input())
while(t>0):
    num=int(input())
    square(num)
    t=t-1
    