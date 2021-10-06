import time
def slowprint(text):
  text = str(text)
  duration = 0
  while(duration < len(text)): 
    time.sleep(0.1)
    print((text[duration]),end = "", flush = True)
    duration = duration+1
  return 
