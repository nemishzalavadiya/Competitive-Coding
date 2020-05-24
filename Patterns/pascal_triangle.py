n=int(input())-1
list_pascle = [[1]]
while n:
    new_list = []
    list_now = list_pascle.pop(-1)
    for i in range(len(list_now)+1):
        if i==0:
            new_list.append(1)
        elif i==len(list_now):
            new_list.append(1)
        else:
            new_list.append(list_now[i]+list_now[i-1])
    n = n-1
    list_pascle.append(new_list)
print(list_pascle.pop(-1))

#OUTPUT:

> 6 # it prints 6th row of pascal triangle
[1, 5, 10, 10, 5, 1]
