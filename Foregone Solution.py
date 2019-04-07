#code
n = int(input())
for j in range(n):
    s = input()
    l = []
    for i in s:        # if any digit is 4 replace it with 1 else replace with 0
        if(i=='4'):
            l.append('1')
        else:
            l.append('0')
    
    l = ''.join(l)   
    print("Case #",end="")
    print(j+1,end="")  # finally subtract new number l from original number s, we get two numbers l and s-l
    print(":",int(s)-int(l) , int(l))
        