
#Average dis btw pts in 2 dim grid
print("calculation for a 6x6 grid")
n,j,q=6,1,1
i=p=d=k=0

while i<6:
    while j<=6:
        while k<6:
            while q<=6:
                p=p+1
                d=d+abs(i-k)+abs(j-q)
                q=q+1
            q=1
            k=k+1
        k=0
        j=j+1
    j=1
    i=i+1
print(p)
print(d)
av=d/p
print("Average distance between points is",av)
#output:1296
#       5040
#       Average distance between points is 3.88888889
