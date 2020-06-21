#!/usr/bin/env python
# coding: utf-8

# In[1]:


import re


# In[2]:


re.search('Ravi', 'Ravi is an exceptional student!')


# In[8]:


# print output of re.search()
match = re.search('Ravi', 'Ravi is an exceptional student!')
print(match.group())


# In[9]:


def find_pattern(text, patterns):
    if re.search(patterns, text):
        return re.search(patterns, text)
    else:
        return 'Not Found!'


# ### Quantifiers

# In[10]:


# '*': Zero or more 
print(find_pattern("ac", "ab*"))
print(find_pattern("abc", "ab*"))
print(find_pattern("abbc", "ab*"))


# In[ ]:


# '?': Zero or one (tells whether a pattern is absent or present)
print(find_pattern("ac", "ab?"))
print(find_pattern("abc", "ab?"))
print(find_pattern("abbc", "ab?"))


# In[ ]:


# '+': One or more
print(find_pattern("ac", "ab+"))
print(find_pattern("abc", "ab+"))
print(find_pattern("abbc", "ab+"))


# In[ ]:


# {n}: Matches if a character is present exactly n number of times
print(find_pattern("abbc", "ab{2}"))


# In[ ]:


# {m,n}: Matches if a character is present from m to n number of times
print(find_pattern("aabbbbbbc", "ab{3,5}"))   # return true if 'b' is present 3-5 times
print(find_pattern("aabbbbbbc", "ab{7,10}"))  # return true if 'b' is present 7-10 times
print(find_pattern("aabbbbbbc", "ab{,10}"))   # return true if 'b' is present atmost 10 times
print(find_pattern("aabbbbbbc", "ab{10,}"))   # return true if 'b' is present from at least 10 times


# ### Anchors

# In[ ]:


# '^': Indicates start of a string
# '$': Indicates end of string

print(find_pattern("James", "^J"))   # return true if string starts with 'J' 
print(find_pattern("Pramod", "^J"))  # return true if string starts with 'J' 
print(find_pattern("India", "a$"))   # return true if string ends with 'c'
print(find_pattern("Japan", "a$"))   # return true if string ends with 'c'


# ### Wildcard

# In[ ]:


# '.': Matches any character
print(find_pattern("a", "."))
print(find_pattern("#", "."))


# ### Character sets

# In[ ]:


# Now we will look at '[' and ']'.
# They're used for specifying a character class, which is a set of characters that you wish to match.
# Characters can be listed individually as follows
print(find_pattern("a", "[abc]"))

# Or a range of characters can be indicated by giving two characters and separating them by a '-'.
print(find_pattern("c", "[a-c]"))  # same as above


# In[ ]:


# '^' is used inside character set to indicate complementary set
print(find_pattern("a", "[^abc]"))  # return true if neither of these is present - a,b or c


# ### Character sets
# | Pattern  | Matches                                                                                    |
# |----------|--------------------------------------------------------------------------------------------|
# | [abc]    | Matches either an a, b or c character                                                      |
# | [abcABC] | Matches either an a, A, b, B, c or C character                                             |
# | [a-z]    | Matches any characters between a and z, including a and z                                  |
# | [A-Z]    | Matches any characters between A and Z, including A and Z                                  |
# | [a-zA-Z] | Matches any characters between a and z, including a and z ignoring cases of the characters |
# | [0-9]    | Matches any character which is a number between 0 and 9                                    |

# ### Meta sequences
# 
# | Pattern  | Equivalent to    |
# |----------|------------------|
# | \s       | [ \t\n\r\f\v]    |
# | \S       | [^ \t\n\r\f\v]   |
# | \d       | [0-9]            |
# | \D       | [^0-9]           |
# | \w       | [a-zA-Z0-9_]     |
# | \W       | [^a-zA-Z0-9_]    |

# ### Greedy vs non-greedy regex

# In[11]:


print(find_pattern("aabbbbbb", "ab{3,5}")) # return if a is followed by b 3-5 times GREEDY


# In[12]:


print(find_pattern("aabbbbbb", "ab{3,5}?")) # return if a is followed by b 3-5 times GREEDY


# In[13]:


# Example of HTML code
print(re.search("<.*>","<HTML><TITLE>My Page</TITLE></HTML>"))


# In[14]:


# Example of HTML code
print(re.search("<.*?>","<HTML><TITLE>My Page</TITLE></HTML>"))


# ### The five most important re functions that you would be required to use most of the times are
# 
# match() Determine if the RE matches at the beginning of the string
# 
# search() Scan through a string, looking for any location where this RE matches
# 
# finall() Find all the substrings where the RE matches, and return them as a list
# 
# finditer() Find all substrings where RE matches and return them as asn iterator
# 
# sub() Find all substrings where the RE matches and substitute them with the given string

# In[15]:


# - this function uses the re.match() and let's see how it differs from re.search()
def match_pattern(text, patterns):
    if re.match(patterns, text):
        return re.match(patterns, text)
    else:
        return ('Not found!')


# In[16]:


print(find_pattern("abbc", "b+"))


# In[17]:


print(match_pattern("abbc", "b+"))


# In[18]:


## Example usage of the sub() function. Replace Road with rd.

street = '21 Ramakrishna Road'
print(re.sub('Road', 'Rd', street))


# In[19]:


print(re.sub('R\w+', 'Rd', street))


# In[20]:


## Example usage of finditer(). Find all occurrences of word Festival in given sentence

text = 'Diwali is a festival of lights, Holi is a festival of colors!'
pattern = 'festival'
for match in re.finditer(pattern, text):
    print('START -', match.start(), end="")
    print('END -', match.end())


# In[21]:


# Example usage of findall(). In the given URL find all dates
url = "http://www.telegraph.co.uk/formula-1/2017/10/28/mexican-grand-prix-2017-time-does-start-tv-channel-odds-lewisl/2017/05/12"
date_regex = '/(\d{4})/(\d{1,2})/(\d{1,2})/'
print(re.findall(date_regex, url))


# In[22]:


## Exploring Groups
m1 = re.search(date_regex, url)
print(m1.group())  ## print the matched group


# In[23]:


print(m1.group(1)) # - Print first group


# In[24]:


print(m1.group(2)) # - Print second group


# In[25]:


print(m1.group(3)) # - Print third group


# In[26]:


print(m1.group(0)) # - Print zero or the default group


# In[ ]:




