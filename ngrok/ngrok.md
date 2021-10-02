# Ngrok

**Share your localhost to anyone.**

Stay agile. Expose your local services in seconds. Ngrok describes itself as “expose a local server behind a NAT or firewall to the internet.”

[![Alt text](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fngrok.com%2Fstatic%2Fimg%2Foverview.png&f=1&nofb=1)](https://ngrok.com/)
```
When you use ngrok, you can expose your local web server, APIs, databases, etc. So, It’s easier to expose your services when you don’t have big changes and don’t wanna deploy it to your development environment. In other words, quickly and useful solution to demo without deploying.
```

    
## Installation

```
Ngrok is very easy to install and don’t have run-time dependences. Just unzip it, add to your path and run it on your terminal.
```

### Step 1: Download ngrok

[Download Ngrok](https://ngrok.com/#download), its available for Windows, Mac and Linux.

### Step 2: Unzip it

Unzip the file and to use it you can manually add it to your path or run it using the script.

```
$ unzip /path/to/ngrok.zip
```

For windows you can add the file to your Environment Variables.

```
C:\Programmes\ngrok-stable-windows-amd64
```

### Step 3: Run it!

```
$ ngrok help
```
    
# Usage

For example i have the following localhost: to the internet.

```
$ ngrok http 3000
```
[![Alt text](https://i.imgur.com/bRFYpo8h.jpg)](https://ngrok.com/docs)

In this example, you can access to your service (localhost:8080) through https://de88-110-235-219-132.ngrok.io/ Sure, and its HTTPS as well!!.


# Set password to access your url

You can also set a password to access your url, for extra security and to avoid abuse.

```
ngrok http -auth="username:password" 8080
```
You can modify your username and password and the website will ask for the same when you access it. security++ (https://ngrok.com/docs#:~:text=io%20-%3E%20127.0.0.1%3A80-,Password%20protecting%20your%20tunnel,-Anyone%20who%20can)
