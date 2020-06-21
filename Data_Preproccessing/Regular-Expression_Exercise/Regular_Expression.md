```python
import re
```

### Q1.
Write a regular expression to match all the files that have either .exe, .xml or .jar extensions. A valid file name can contain any alphabet, digit and underscore followed by the extension.


```python
files = ['employees.xml', 'calculator.jar', 'nfsmw.exe', 'bkgrnd001.jpg', 'sales_report.ppt']

pattern = "^.+\.(xml|jar|exe)$"

result = []

for file in files:
    match = re.search(pattern, file)
    if match !=None:
        result.append(file)

# print result - result should only contain the items that match the pattern
print(result)
```

    ['employees.xml', 'calculator.jar', 'nfsmw.exe']
    

### Q2
Write a regular expression to match all the addresses that have Koramangala embedded in them.

Strings that should match:
* 466, 5th block, Koramangala, Bangalore
* 4th BLOCK, KORAMANGALA - 560034

Strings that shouldn't match:
* 999, St. Marks Road, Bangalore



```python
addresses = ['466, 5th block, Koramangala, Bangalore', '4th BLOCK, KORAMANGALA - 560034', '999, St. Marks Road, Bangalore']

pattern = "^[\w\d\s,-]*koramangala[\w\d\s,-]*$"

result = []

for address in addresses:
    match = re.search(pattern, address, re.I)
    if match !=None:
        result.append(address)

# print result - result should only contain the items that match the pattern
print(result)
```

    ['466, 5th block, Koramangala, Bangalore', '4th BLOCK, KORAMANGALA - 560034']
    

### Q3. 
Write a regular expression that matches either integer numbers or floats upto 2 decimal places.

Strings that should match: 
* 2
* 2.3
* 4.56
* .61

Strings that shoudln't match:
* 4.567
* 75.8792
* abc



```python
numbers = ['2', '2.3', '4.56', '.61', '4.567', '75.8792', 'abc']

pattern = "^[0-9]*(\.[0-9]{,2})?$"

result = []

for number in numbers:
    match = re.search(pattern, number)
    if match != None:
        result.append(number)

# print result - result should only contain the items that match the pattern
print(result)
```

    ['2', '2.3', '4.56', '.61']
    

### Q4. 
Write a regular expression to match the model names of smartphones which follow the following pattern: 

mobile company name followed by underscore followed by model name followed by underscore followed by model number

Strings that should match:
* apple_iphone_6
* samsung_note_4
* google_pixel_2

Strings that shouldn’t match:
* apple_6
* iphone_6
* google\_pixel\_



```python
phones = ['apple_iphone_6', 'samsung_note_4', 'google_pixel_2', 'apple_6', 'iphone_6', 'google_pixel_']

pattern = "^.*_.*_\d$"

result = []

for phone in phones:
    match = re.search(pattern, phone)
    if match !=None:
        result.append(phone)

# print result - result should only contain the items that match the pattern
print(result)
```

    ['apple_iphone_6', 'samsung_note_4', 'google_pixel_2']
    

### Q5. 
Write a regular expression that can be used to match the emails present in a database. 

The pattern of a valid email address is defined as follows:
The '@' character can be preceded either by alphanumeric characters, period characters or underscore characters. The length of the part that precedes the '@' character should be between 4 to 20 characters.

The '@' character should be followed by a domain name (e.g. gmail.com). The domain name has three parts - a prefix (e.g. 'gmail'), the period character and a suffix (e.g. 'com'). The prefix can have a length between 3 to 15 characters followed by a period character followed by either of these suffixes - 'com', 'in' or 'org'.


Emails that should match:
* random.guy123@gmail.com
* mr_x_in_bombay@gov.in

Emails that shouldn’t match:
* 1@ued.org
* @gmail.com
* abc!@yahoo.in
* sam_12@gov.us
* neeraj@


```python
emails = ['random.guy123@gmail.com', 'mr_x_in_bombay@gov.in', '1@ued.org',
          '@gmail.com', 'abc!@yahoo.in', 'sam_12@gov.us', 'neeraj@']

pattern = "^[a-z_.0-9]{4,20}@[a-z]{3,15}\.(com|in|org)$"

result = []

for email in emails:
    match = re.search(pattern, email, re.I)
    if match !=None:
        result.append(email)

# print result - result should only contain the items that match the pattern
print(result)
```

    ['random.guy123@gmail.com', 'mr_x_in_bombay@gov.in']
    
