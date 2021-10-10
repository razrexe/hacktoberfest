import urllib.parse
url = input("Input url: ")
encoded_url = urllib.parse.quote(url)
print ("Encoded URL:")
print (encoded_url)
