from functools import reduce
n=int(input())
if n==1:
    print(1)
else:
    list_=[]
    string = reduce(lambda x,y:str(x)+str(y),range(n,0,-1))
    string = string + string[-2::-1]
    list_.append(string)
    for i in range(1,n):
        string = string.replace(str(i),str(i+1))
        list_.append(string)
    for i in list_[-1::-1]:
        print(i)
    for i in list_[1:]:
        print(i)
        
#OUTPUT
>4
4444444
4333334
4322234
4321234
4322234
4333334
4444444

>5
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
