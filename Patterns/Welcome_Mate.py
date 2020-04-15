n,m=map(int,input().strip().split(' '))
list_=[]
for i in range(n//2):
    a=''
    n_pipe=2*i+1
    n_dot=2*i*2+2
    n__dash=m-n_pipe-n_dot
    for i in range(n__dash//2):
        a=a+'-'
    a=a+'.'
    for i in range(n_pipe):
        a=a+'|'
        if i!=n_pipe-1:
            a=a+'..'
    a=a+'.'
    for i in range(n__dash//2):
        a=a+'-'
    list_.append(a)
for i in list_:
    print(i)
welcome=7
for i in range((m-welcome)//2):
    print('-',end='')
print('WELCOME',end="")
for i in range((m-welcome)//2):
    print('-',end='')
print()
for i in range(len(list_)-1,-1,-1):
    print(list_[i])
    
    
#OUTPUT
# > python test.py
# 9 27
# ------------.|.------------
# ---------.|..|..|.---------
# ------.|..|..|..|..|.------
# ---.|..|..|..|..|..|..|.---
# ----------WELCOME----------
# ---.|..|..|..|..|..|..|.---
# ------.|..|..|..|..|.------
# ---------.|..|..|.---------
# ------------.|.------------
