#this code uses 2 pointer technique to avoid sorting

import ast
input_str = input()
input_list = ast.literal_eval(input_str)
if len(input_list)<2:
    print("not present")
else:
    i=input_list[0]
    j=i
    for index_val in input_list[1:]:
        if i<index_val:
            j=i
            i=index_val
        elif index_val>j and index_val!=i:
            j=index_val
        elif i==j and index_val<j:j=index_val
    if i==j:
        print("not present")
    else:
        print(j)

        
#OUTPUT
>[6,6,5,6,6]
5
