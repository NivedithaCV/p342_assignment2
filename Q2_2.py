#vectors
A=[1,2,3]
B=[4,5,6]
c=[]
# finding A+B
i=0
x=0
while i<len(A) and i<len(B):
    x=A[i]+B[i]
    c.append(x)
    i=i+1
print("sum: ",c)

#find A.B
s=0
j=0;
while j<len(A) and j<len(B):
    d=A[j]*B[j]
    s=s+d
    j=j+1
print("dot product:",s)
#output: sum:[5 7 9]
#       dot product:32
