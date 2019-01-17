import requests
import os

url = "https://edu-image.nosdn.127.net/3321D6673EB82C94D08E1B80E8344166.jpg"
root = os.path.abspath(".")
path = os.path.join(root, url.split('/')[-1])

try:
    if not os.path.exists(root): # if directory is not exists, then create directory
        os.mkdir(root)
    if not os.path.exists(path):
    	r = requests.get(url)
    	with open(path, 'wb') as f:
            f.write(r.content)
            f.close()
            print("file save successful!")
    else:
        print("file alreadly exists!")
except:
    print("fetch failed!")
        
