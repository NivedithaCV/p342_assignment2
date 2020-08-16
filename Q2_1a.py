#finding average dist btw 2 pts in staight line

print("straight line made up of 6 point")
n=6
i=1
p=0
d=0
while i<=n:
    j=1
    while j<=n:
        p=p+1;
        d=d+abs(i-j)
        j=j+1
    i=i+1
av=d/p
print("average distance between two points is",av)
#output:straight line made up of 6 point
#       average distanve between two points is 1.9444444444
