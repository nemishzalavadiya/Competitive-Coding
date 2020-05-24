#take input here
s=input()

#write code to format the string s as asked 
removed_sapces_list= s.split(' ')
for i in range(len(removed_sapces_list)):
    removed_sapces_list[i]=removed_sapces_list[i].capitalize()
print('_'.join(removed_sapces_list))


#OUTPUT
----------------------------------------------------------------------
Sample input:
caloRie consuMed

Sample output:
Calorie_Consumed

----------------------------------------------------------------------
Sample input:
data science

Sample output:
Data_Science
