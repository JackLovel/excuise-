import os

with open('./random2.bin', 'wb') as f:
    f.write(os.urandom(10))
