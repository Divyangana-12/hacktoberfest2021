l1 = []
l2 = []
m = int(input())
n = int(input())
for i in range(m):
    if(i%m==0):
        l1.append(i)
        print(l1)        
for i in range(n):
    if i%n==0:
        l2.append(i)
for i in range(len(l1)):
    for j in range(len(l2)):
        if l1[i]==l2[j]:
            if l1[i]==1:
                print("Co-primes")
            else:
                print("Not Co-primes")    