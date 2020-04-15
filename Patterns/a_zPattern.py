def print_rangoli(size):
    # your code goes here
    if size==1:
        print('a')
        return
    row=(size)+(size-1)
    col=(row-1)*2+1
    list_=[]
    char_value=97+(size-1)
    for i in range(row//2):
        a=''
        char = 2*i+1
        dash_between = char-1
        dash = col-char-dash_between
        for i in range(dash//2):
            a=a+'-'
        for i in range(char//2+1):
            a=a+chr(char_value)
            char_value=char_value-1
            a=a+'-'
        char_value=char_value+2
        for i in range(char//2):
            a=a+chr(char_value)
            char_value=char_value+1
            if i!=(char//2):
                a=a+'-'
        for i in range(dash//2-1):
            a=a+'-'
        list_.append(a)
        char_value=97+(size-1)
    for i in list_:
        print(i)
    a=''
    for i in range(row//2+1):
        a=a+chr(char_value)
        a=a+'-'
        char_value=char_value-1
    char_value=char_value+2
    for i in range(row//2):
        a=a+chr(char_value)
        char_value=char_value+1
        if i!=(row//2-1):
            a=a+'-'
    print(a)
    for i in range(len(list_)-1,-1,-1):
        print(list_[i])

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
    
#OUTPUT
#Programe> python test.py
# 10
# ------------------j------------------
# ----------------j-i-j----------------
# --------------j-i-h-i-j--------------
# ------------j-i-h-g-h-i-j------------
# ----------j-i-h-g-f-g-h-i-j----------
# --------j-i-h-g-f-e-f-g-h-i-j--------
# ------j-i-h-g-f-e-d-e-f-g-h-i-j------
# ----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
# --j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
# j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j
# --j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
# ----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
# ------j-i-h-g-f-e-d-e-f-g-h-i-j------
# --------j-i-h-g-f-e-f-g-h-i-j--------
# ----------j-i-h-g-f-g-h-i-j----------
# ------------j-i-h-g-h-i-j------------
# --------------j-i-h-i-j--------------
# ----------------j-i-j----------------
# ------------------j------------------
