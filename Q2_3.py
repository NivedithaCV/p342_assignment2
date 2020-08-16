#MxA nd MxN
try:
    fhand=open("A")
    ghand=open("B")
except:
    print("File not found")
else:
    M=[]
    N=[]
    A=[[1],[2],[3]]
#A=0,0,0            B=2,2,2
#  1,-1,1             2,2,2
#  1,1,0              2,1,2
    for line in fhand:
        line=line.rstrip()
        li=list(line.split(","))
        c=len(li)
        M.append(li)

    for k in ghand:
        k=k.rstrip()
        lis=list(k.split(","))
        d=len(lis)
        N.append(lis)

    print("MxN:")
    D=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(3):
        for j in range(3):
            for k in range(3):
                D[i][j]+=int(M[i][k])*int(N[k][j])

    for r in D:
        print(r)
    print("MxA:")
    C=[[0],[0],[0]]
    for i in range(len(M)):
        for j in range(len(A[0])):
            for k in range(len(A)):
                C[i][j]+=int(M[i][k])*int(A[k][j])

    for q in C:
        print(q)
#Ouput:MxN:
#          [0,0,0]
#          [2,1,2]
#          [4,4,4]
#    MxA:
#         [0]
#         [2]
#         [3]
