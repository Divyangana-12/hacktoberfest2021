
import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    arr1 = set(arr)
    b = list(arr1)
    total = 0
    total2 = 0
    for i in range(len(b)-1):
        total = total + b[i]
    b = b[::-1]
    for j in range(len(b)-1):
        total2 = total2 + b[j]    
    return arr1    
if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
