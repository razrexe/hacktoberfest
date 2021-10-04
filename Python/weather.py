import requests

city = input("Enter your city : ")

url = f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid=0c42f7f6b53b244c78a418f4f181282a&units=metric'

res = requests.get(url)

data = res.json()
temp = data['main']['temp']
wind_speed = data['wind']['speed']
description = data['weather'][0]['description']
latitude = data['coord']['lat']
longitude = data['coord']['lon']

print(f'Temperature: {temp} degree celcius')
print(f'Wind Speed :{wind_speed}')
print(f'Description: {description}')
print(f'Latitude: {latitude}')
print(f'Longitude: {longitude}')