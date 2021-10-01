import flask
from flask import request
import urllib.request
from bs4 import BeautifulSoup
import re

app = flask.Flask(__name__)
app.config["DEBUG"] = True

@app.route('/', methods=['GET','POST'])
def home():
    return "Hello"



@app.route('/<addr>/<action>', methods=['GET'])

def find(addr,action):
    if addr=="github":
        address="https://github.com/"
    elif addr=="gfg":
        address="https://www.geeksforgeeks.org/"
    elif addr=="ticollege":
        address="http://ticollege.ac.in/index.php"
    elif addr=="wikipedia":
        address="https://www.wikipedia.org/"
    elif addr=="amazon":
        address="https://www.amazon.com/"
        # print(addr)
        # hold=[]
        # i=0
        # while (i<len(addr)-2):
        #     # print(addr[i])

            
        #     if addr[i:i+2]=="SL":
        #         hold.append("/")
        #         # print(hold)
        #         i+=2
        #     elif addr[i:i+2]=="CL":
        #         hold.append(":")
        #         # print(hold)
        #         i+=2
        #     elif addr[i:i+2]=="DT":
        #         hold.append(".")
        #         # print(hold)
        #         i+=2
        #     else:
        #         hold.append(addr[i])
        #         i+=1
        #         # print(hold)
        # # print(i)

        # while(i<len(addr)):
        #     hold.append(addr[i])
        #     # print(hold)
        #     i+=1
                
        # print(hold)
        # address=""
        # for i in range(len(hold)):
        #     address+=hold[i]
        # address+="/"
        # print(address)
        # print(f)
        # if address==f:
        #     print("yes")
        # address=f
            
    
    
    
    # return (address+action)
    urllib.request.urlretrieve(address,"text_file.txt")
    
    command=action
    output=""

    try:
        pattern = '<a href=http.*?>{0}'.format(command)
        with open("text_file.txt") as f:
            x=f.read()
        match_results = re.search(pattern, x, re.IGNORECASE)
        if match_results:
            title = match_results.group()
            x=title.split("<a href=")
            output=x[-1]
        else:

            pattern = '<a href="http.*?".*?>{0}</a>'.format(command)
            with open("text_file.txt") as f:
                x=f.read()
            match_results = re.search(pattern, x, re.IGNORECASE)
            title = match_results.group()
            x=title.split("<a href=")
            output=x[-1]

        if x[-1]:
            flag=1
            for i in range(len(x[-1])):
                if x[-1][i]=='"':
                    flag=0
                    k=1
                    while(x[-1][i+k]!='"'):
                        k+=1;
                    break
            if flag==0:
                output=x[-1][i+1:k]
            else:
                k=0
                while(k<len(x[-1]) and x[-1][k]!='>'):
                    k+=1
                if x[-1][k-1]=='/':
                    output=x[-1][:k-1]
                else:
                    output=x[-1][:k]
    except:
        try:
            print("hi")
            pattern = '<a href=.*?> {0}'.format(command)
            with open("text_file.txt",encoding="utf8")as file:
                x=file.read()
            x = re.sub("^\s*|\s*$","",re.sub("\s+"," ",x))
            match_results = re.search(pattern, x, re.IGNORECASE)
            if match_results:
                title = match_results.group()
                x=title.split("<a href=")
                i=0
                while(x[-1][i]!=" "):
                    i+=1
            output=x[-1][:i]
        except:
            pattern = '<a href=".*?".*?>{0}'.format(command)
            with open("text_file.txt",encoding="utf8")as file:
                x=file.read()
            match_results = re.search(pattern, x, re.IGNORECASE)
            if match_results:
                title = match_results.group()
                x=title.strip().split('<a href="')
                i=0
                while(x[1][i]!='"'):
                    i+=1
            output=x[1][:i]
            


    if output[0]=="/":
        output=address[:-1]+output
    return output


app.run()
